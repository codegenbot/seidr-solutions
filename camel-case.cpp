```cpp
#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    bool capitalizeNext = true;
    std::string result;

    for (const char* p = str.c_str(); *p; p++) {
        if (*p == '-') {
            p++; // Skip the '-'
            if (!capitalizeNext) {
                result += tolower(*p);
            } else {
                result += toupper(*p);
                capitalizeNext = false;
            }
        } else {
            capitalizeNext ? (result += std::toupper(*p)) : (result += std::tolower(*p));
            capitalizeNext = true;
        }
    }

    std::cout << result.c_str() << std::endl;

    return 0;
}