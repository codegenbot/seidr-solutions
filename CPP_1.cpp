#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a){
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string){
    std::vector<std::string> result;
    std::string group;
    int count = 0;

    for(char c : paren_string){
        if(c == '('){
            if(count > 0){
                group += c;
            }
            count++;
        }
        else if(c == ')'){
            count--;
            if(count > 0){
                group += c;
            }
            else if(count == 0){
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))")));
    return 0;
}