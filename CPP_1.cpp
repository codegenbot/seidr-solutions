```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    int open_count = 0;
    std::string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main(){
    assert(issame({{"", "()"}, {"", "(())"}}, separate_paren_groups("( ) (( )) (( )( )")));
    return 0;
}