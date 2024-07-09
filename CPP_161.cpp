#include <iostream>
#include <string>

int main {
    std::cout << "Please enter a sentence: ";
    std::string s;
    std::cin >> s;

    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }

    return 0;
}