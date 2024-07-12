#include <iostream>
#include <string>
#include <vector>

bool is_happy(std::string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        std::string sub = "";
        for (int j = 0; j < 3 && i + j < s.length(); j++) {
            sub += s[i+j];
        }
        std::string strArr = sub;
        bool unique = true;
        for (char c : strArr) {
            int count = 0;
            for (char a : strArr) {
                if (a == c)
                    count++;
            }
            if (count > 1) {
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