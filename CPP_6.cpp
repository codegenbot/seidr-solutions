#include <iostream>
#include <vector>
using namespace std;

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

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<int> result = parse_nested_parens("(()(())((())))");
    cout << issame(result, {4}) << endl;
    return 0;
}