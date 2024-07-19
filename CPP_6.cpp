#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_nested_parens(string paren_string); 

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int depth = 0;
    for(char c : paren_string){
        if(c == '('){
            depth++;
            depths.push_back(depth);
        } else if(c == ')'){
            depth--;
        }
    }
    return depths;
}