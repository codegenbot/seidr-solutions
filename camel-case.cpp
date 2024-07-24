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
        } else if (capitalizeNext) {
            result += std::toupper(c); 
            capitalizeNext = false;
        } else {
            result += std::tolower(c);
        }
    }

    std::cout << result << std::endl;

    return 0;
}