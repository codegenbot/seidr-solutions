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
                result.push_back(tolower(*p));
            } else {
                result.push_back(toupper(*p));
                capitalizeNext = false;
            }
        } else {
            if (capitalizeNext) {
                result.push_back(toupper(*p)); 
                capitalizeNext = false;
            } else {
                result.push_back(tolower(*p));
            }
            capitalizeNext = true;
        }
    }

    std::cout << result.c_str() << std::endl;

    return 0;
}