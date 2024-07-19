#include <vector>
#include <string>
#include <cassert>

bool issame(vector<int> a, vector<int> b) { return a == b; }
vector<int> parse_nested_parens(string paren_string);

int main(){
    vector<int> a = parse_nested_parens("(()())");
    vector<int> b = {1, 2, 2, 3, 3, 2};
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