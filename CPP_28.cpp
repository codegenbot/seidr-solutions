```
#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return "Concatenated string: " + result + "\n";
}

int main() {
    std::vector<std::string> strings;
    while (true) {
        std::cout << "Enter a string (or 'stop' to finish): ";
        std::string input;
        std::getline(std::cin, input);
        if (input == "stop") break;

        strings.push_back(input); 
    }

    std::cout << concatenate(strings) << std::endl;
    return 0;
}