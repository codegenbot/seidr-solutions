#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int max_level = 0;
    int current_level = 0;
    for(char c : paren_string){
        if(c == '('){
            current_level++;
            max_level = max(max_level, current_level);
        }
        else if(c == ')'){
            current_level--;
        }
        else if(c == ' '){
            result.push_back(max_level);
            max_level = 0;
            current_level = 0;
        }
    }
    result.push_back(max_level);
    return result;
}