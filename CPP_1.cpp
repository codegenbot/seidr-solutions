#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;

    // Iterate over each character in the input string
    for (char c : paren_string) {
        // Ignore spaces
        if (c == ' ') {
            continue;
        }
        // If it's an opening parenthesis, append it to the current group
        else if (c == '(') {
            current_group += c;
        }
        // If it's a closing parenthesis, check if the current group is non-empty
        // If so, append it to the result and clear the current group
        else if (c == ')') {
            if (!current_group.empty()) {
                current_group += c;
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    std::string paren_string = "( ) (( )) (( )( ))";
    std::vector<std::string> groups = separate_paren_groups(paren_string);

    // Print the resulting groups
    for (const std::string& group : groups) {
        std::cout << group << " ";
    }
    std::cout << std::endl;

    return 0;
}