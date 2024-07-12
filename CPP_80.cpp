#include <iostream>
#include <string>

bool is_happy(std::string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        std::string sub = s.substr(i, 3);
        bool unique = true;
        for (char c : sub) {
            int count = 0;
            char cTemp[4];
            for (int j = i; j < i + 3; j++) {
                cTemp[count] = s[j];
                count++;
            }
            std::string tempStr(cTemp, count);
            if (tempStr.find(c) != std::string::npos) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}

int main() {
    std::cout << (is_happy("iopaxioi") ? "True" : "False") << std::endl;
    std::string input;
    while (true) {
        std::cout << "Enter a string: ";
        std::cin >> input;
        if (input == "exit")
            break;
        std::cout << (is_happy(input) ? "True" : "False") << std::endl;
    }
}