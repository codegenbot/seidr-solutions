#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> parse_nested_parens(std::string paren_string);

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

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

int main(){
    std::vector<int> a = parse_nested_parens("(()())");
    std::vector<int> b = {1, 2, 1, 2, 1, 1};
    assert(issame(a, b));
    
    return 0;
}