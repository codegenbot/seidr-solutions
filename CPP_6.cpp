
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string){
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

int main(){
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}