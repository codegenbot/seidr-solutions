#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(string paren_string);

bool issame(const vector<int> a, const vector<int> b);

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int depth = 0;
    for(char c : paren_string){
        if(c == '('){
            depth++;
            depths.push_back(depth);
        } else if(c == ')'){
            depths.push_back(depth);
            depth--;
        }
    }
    return depths;
}

bool issame(const vector<int> a, const vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert (issame(parse_nested_parens("(()(())((())))"), {1, 2, 3, 2, 1, 2, 3, 4}));
    return 0;
}