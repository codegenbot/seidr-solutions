#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_nested_parens(std::string paren_string){
    std::vector<int> levels;
    int max_level = 0;
    int current_level = 0;
    
    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            current_level++;
            if (current_level > max_level) {
                max_level = current_level;
            }
        } else if (paren_string[i] == ')') {
            current_level--;
        } else if (paren_string[i] == ' ') {
            levels.push_back(max_level);
            max_level = 0;
            current_level = 0;
        }
    }
    
    levels.push_back(max_level);
    return levels;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));

    return 0;
}