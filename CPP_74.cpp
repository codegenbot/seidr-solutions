#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void get_user_input(std::vector<std::string>& user_input) {
    std::string input;
    while (std::cout << "Enter a string (or 'stop' to finish): ", 
           std::getline(std::cin, input), input != "stop") {
        user_input.push_back(input);
    }
}

int main() {
    std::vector<std::string> user_input;
    get_user_input(user_input);
    if (isSame({user_input[0]}, user_input)) {
        std::cout << "The two lists are the same." << std::endl;
    } else {
        std::cout << "Error: The two lists are not the same." << std::endl;
    }
    return 0;
}