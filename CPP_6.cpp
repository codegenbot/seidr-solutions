#include <vector>
#include <cassert>
#include <string>

bool issame(const std::vector<int> a, const std::vector<int> b);
std::vector<int> parse_nested_parens(std::string paren_string);

std::vector<int> parse_nested_parens(std::string paren_string){
    std::vector<int> depths;
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

bool issame(const std::vector<int> a, const std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> a = parse_nested_parens("((()))");
    std::vector<int> b = {1, 2, 3, 2, 1};
    assert(issame(a, b));
    return 0;
}  