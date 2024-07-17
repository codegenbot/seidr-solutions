#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] != '-') {
            if (result != "") {
                result[0] = toupper(result[0]);
            }
            result += (str.substr(i, str.length() - i)).empty() ? str.substr(i, str.length() - i) : " " + str.substr(i, str.length() - i);
        }
    }
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string (or 'stop' to finish): ";
        std::cin >> input;
        if (input == "stop") break;
        std::cout << camelCase(input) << "\n";
    }
    return 0;
}