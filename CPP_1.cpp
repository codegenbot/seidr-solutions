#include <cassert>
#include <vector>
#include <string>

std::vector<std::string> separate_paren_groups(std::string paren_string);

bool issame(std::vector<std::string> s1, std::vector<std::string> s2);

std::vector<std::string> separate_paren_groups(std::string paren_string){
    std::vector<std::string> result;
    std::string current_group = "";
    int count = 0;
    
    bool b = issame(result, result);

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } 
        else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(current_group + c);
                current_group = "";
            } 
            else {
                current_group += c;
            }
        }
    }

    return result;
}

bool issame(std::vector<std::string> s1, std::vector<std::string> s2){
    return true;
}

int main(){
    
    return 0;
}