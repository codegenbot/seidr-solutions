#include <vector>
#include <cassert>

bool issame(vector<int> v1, vector<int> v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int max_depth = 0;
    int current_depth = 0;
    for(char c : paren_string){
        if(c == '('){
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if(c == ')'){
            current_depth--;
        } else if(c == ' '){
            depths.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}