#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_nested_parens(std::string s){
    std::vector<int> count_stack;
    int current_depth = 0;

    for(char c : s){
        if(c == '('){
            current_depth++;
        } 
        else if(c == ')'){
            count_stack.push_back(current_depth);
            current_depth--;
        }
    }

    return count_stack;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}