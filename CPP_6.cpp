#include <vector>

vector<int> parse_nested_parens(string paren_string){
    vector<int> levels;
    int max_level = 0;
    int curr_level = 0;
    for(int i=0; i<paren_string.size(); i++){
        if(paren_string[i] == '('){
            curr_level++;
            if(curr_level > max_level){
                max_level = curr_level;
            }
        }
        else if(paren_string[i] == ')'){
            curr_level--;
        }
        else if(paren_string[i] == ' '){
            levels.push_back(max_level);
            max_level = 0;
            curr_level = 0;
        }
    }
    levels.push_back(max_level);
    return levels;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

int main(){
    string paren_string;
    getline(cin, paren_string);

    string expected_output;
    getline(cin, expected_output);

    vector<int> parsed_parens = parse_nested_parens(paren_string);

    vector<int> expected_parens;
    int start = 0;
    for(int i=0; i<expected_output.size(); i++){
        if(expected_output[i] == ' '){
            string num_str = expected_output.substr(start, i-start);
            expected_parens.push_back(stoi(num_str));
            start = i+1;
        }
    }
    string last_num_str = expected_output.substr(start);
    expected_parens.push_back(stoi(last_num_str));

    bool same = issame(parsed_parens, expected_parens);
    if(same){
        cout << "Same";
    }
    else{
        cout << "Different";
    }

    return 0;
}