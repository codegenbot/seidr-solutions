#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> getStrings() {
    std::vector<std::string> strings;
    while (true) {
        std::cout << "Enter a string (or 'stop' to finish): ";
        std::string input;
        std::getline(std::cin, input);
        if (strings.empty() || *strings.rbegin() != "stop") {
            strings.push_back(std::move(input)); 
        }
        else {
            break;
        }
    }

    return strings;
}

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str + "\n";
    }
    return {result};
}

int main()
{
    std::vector<std::string> strings = getStrings();
    std::vector<std::string> concatenated = concatenate(strings);
    
    for (const auto& str : concatenated) {
        std::cout << str;
    }
}