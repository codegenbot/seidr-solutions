```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& input) {
    std::vector<std::string> result;
    for (int i = 0; i <= input.size(); ++i) {
        if(i > 0)
            result.push_back(input.substr(0, i));
    }
    return result;
}

int mainFunc() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
    } else {
        std::vector<std::string> result = all_prefixes(input);
        if (!issame(result)) {
            std::cout << "The prefixes are not the same." << std::endl;
        } else {
            std::cout << "The prefixes are the same." << std::endl;
        }
    }

    std::vector<std::string> www = all_prefixes("WWW");
    if (!issame(www)) {
        std::cout << "The prefixes are not the same." << std::endl;
    } else {
        std::cout << "The prefixes are the same." << std::endl;
    }

    return 0;
}