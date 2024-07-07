#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strVec) {
    std::string result = "";
    for (const auto& str : strVec) {
        result += str + " ";
    }
    return result;
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

    std::string result = concatenate(strings);
    std::cout << "Concatenated string: " << result << std::endl;
    return 0;
}