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
    std::string outputString;

    while (true) {
        std::cin.ignore(); 
        std::cout << "Enter a string (or stop to finish): ";
        std::getline(std::cin, outputString);

        if (outputString == "stop") break;

        strings.push_back(outputString + " "); // add a space after each input string
    }

    std::cout << concatenate(strings) << std::endl; 
    return 0;
}