#include <vector>

std::vector<int> parse_nested_parens(std::string paren_string){
    std::vector<int> result;
    int max_depth = 0;
    int current_depth = 0;
    for(char c : paren_string){
        if(c == '('){
            current_depth++;
            if(current_depth > max_depth){
                max_depth = current_depth;
            }
        } else if(c == ')'){
            current_depth--;
        } else if(c == ' '){
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    result.push_back(max_depth);
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){

}

int main() {
    std::vector<int> parse_nested_parens(std::string paren_string);

    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
}