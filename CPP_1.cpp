#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string group;
    int count = 0;

    for(char c : paren_string){
        if(c == '('){
            if(count > 0){
                group += c;
            }
            count++;
        }
        else if(c == ')'){
            count--;
            if(count > 0){
                group += c;
            }
            else if(count == 0){
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

int main() {
    // Test cases
    string input1 = "((a)(b)(c))";
    vector<string> output1 = separate_paren_groups(input1);

    string input2 = "(a)(b)(c)";
    vector<string> output2 = separate_paren_groups(input2);

    string input3 = "(a(b(c)))";
    vector<string> output3 = separate_paren_groups(input3);

    vector<string> expectedOutput1 = {"(a)", "(b)", "(c)"};
    vector<string> expectedOutput2 = {"(a)(b)(c)"};
    vector<string> expectedOutput3 = {"(a(b(c)))"};

    if (issame(expectedOutput1, output1) && issame(expectedOutput2, output2) && issame(expectedOutput3, output3)) {
        cout << "Results are correct." << endl;
    } else {
        cout << "Results are incorrect." << endl;
    }

    return 0;
}