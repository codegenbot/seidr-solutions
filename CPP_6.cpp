#include <vector>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> parse_nested_parens(const std::string& s){
    int depth = 0;
    std::vector<int> depths;
    
    for(char c : s){
        if(c == '('){
            depth++;
        } else if(c == ')'){
            depths.push_back(depth);
            depth--;
        }
    }
    
    return depths;
}

int main(){
    assert(is_same(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
}