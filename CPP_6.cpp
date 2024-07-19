#include <vector>
#include <string>
#include <cassert>

vector<int> parse_nested_parens(string paren_string);
bool issame(vector<int> a, vector<int> b) { return a == b; }

int main(){
    vector<int> a = parse_nested_parens("(()())");
    vector<int> b = {1, 2, 2, 1, 0, 1};
    assert(issame(a, b));
    
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
            depths.push_back(depth);
            depth--;
        }
    }
    return depths;
}