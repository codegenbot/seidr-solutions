```cpp
#include <iostream>
#include <vector>
#include <string>

int concatenate(const std::vector<std::string>& strings) {
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
        cout << "Enter a string (or stop to finish): ";
        getline(cin, userInput);

        if (userInput == "stop") break;

        strings.push_back(userInput);
    }

    std::cout << "Concatenated string: " << concatenate(strings) << std::endl;
    return 0;
}