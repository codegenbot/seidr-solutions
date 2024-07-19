#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

int main() {
    std::string input;
    std::cin >> input;
    std::vector<std::string> result = separate_paren_groups(input);
    for(const auto& group : result) {
        std::cout << group << " ";
    }
    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string){
    std::vector<std::string> result;
    std::string current_group;
    int open_count = 0;

    for(char c : paren_string){
        if(c == '('){
            if(open_count > 0){
                current_group += c;
            }
            open_count++;
        } else if(c == ')'){
            open_count--;
            if(open_count > 0){
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}