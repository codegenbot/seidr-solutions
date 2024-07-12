#include <iostream>
#include <string>
#include <cctype>

bool is_happy(std::string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        std::string sub = "";
        for (int j = 0; j < 3 && i + j < s.length(); j++) {
            char c = std::toupper(s[i+j]); 
            sub.push_back(std::toupper(s[i+j])); 
        }
        bool unique = true;
        for (char a : sub) { // Check the modified substring
            int count = 0;
            for (char b : sub) {
                if (b == a)
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
    std::cout << "Enter a string: ";
    std::string input;
    while (true) {
        std::cin >> input;
        if (input == "exit")
            break;
        std::cout << (is_happy(input) ? "True" : "False") << std::endl;
    }
}