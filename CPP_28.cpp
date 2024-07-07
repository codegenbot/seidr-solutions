#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> strings;
    while (true) {
        std::cout << "Enter a string (or 'stop' to finish): ";
        std::string input;
        std::getline(std::cin, input);
        if (input == "stop") break;

        strings.push_back(input); 
    }

    std::string result = "";
    for (const auto& str : strings) {
        result += str + "\n";
    }
    std::cout << "Concatenated string: " << result;
    return 0;
}