```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cin >> str;

    bool capitalizeNext = true;
    std::string result;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true; 
        } else {
            result += (capitalizeNext ? toupper(c) : tolower(c));
            capitalizeNext = false;
        }
    }

    std::cout << result;

    return 0;
}