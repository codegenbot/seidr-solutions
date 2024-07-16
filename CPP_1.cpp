#include <vector>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string){
    std::vector<std::string> result;
    std::string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            if (open_count > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_count--;
            if (open_count > 0) {
                current_group += c;
            } else if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main(){
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    
    return 0;
}