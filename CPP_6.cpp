#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int curr_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            curr_depth++;
            depths.push_back(curr_depth);
        } else if (c == ')') {
            curr_depth--;
        }
    }
    return depths;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert (issame(parse_nested_parens("(()(())((())))"), {4}));
    
    return 0;
}