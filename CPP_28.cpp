#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> strings;
    std::string outputString;

    while (true) {
        std::cout << "Enter a string (or stop to finish): ";
        std::cin >> outputString; 

        if (outputString == "stop") break;

        strings.push_back(outputString);
    }

    std::string result = "";
    for (const auto& str : strings) {
        result += str + " ";
    }
    std::cout << "Concatenated string: " << result << std::endl;
    return 0;
}