#include <vector>
#include <algorithm>
#include <cassert>

namespace custom {
    bool issame(const std::vector<int>& a, const std::vector<int>& b){
        return a == b;
    }
}

std::vector<int> parse_nested_parens(const std::string& paren_string){
    std::vector<int> result;
    int max_level = 0;
    int current_level = 0;
    for(char c : paren_string){
        if(c == '('){
            current_level++;
            max_level = std::max(max_level, current_level);
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

int main() {
    assert(custom::issame(parse_nested_parens("(()(())((())))"), std::vector<int>{4, 3, 2, 1}));
    
    return 0;
}