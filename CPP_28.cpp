#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str + " ";
    }
    return result;
}

int main() {
    std::vector<std::string> strings;
    std::string userInput;

    while (true) {
        cin.ignore();
        std::cout << "Enter a string (or stop to finish): ";
        getline(cin, userInput);

        if (userInput == "stop") break;

        strings.push_back(userInput);
    }

    std::string result = concatenate(strings);
    std::cout << "Concatenated string: " << result << endl;
    return 0;
}