```cpp
#include <cctype>
#include <iostream>
#include <sstream>

int main() {
    std::string str;
    std::cin >> str;
    std::stringstream resultStream;
    std::string result;

    for (const char* p = str.c_str(); *p; p++) {
        if (*p == '-') {
            p++; // Skip the '-'
            temp += (capitalizeNext) ? std::toupper(*p) : std::tolower(*p);
            capitalizeNext = false;
        } else {
            temp += (capitalizeNext) ? std::toupper(*p) : std::tolower(*p);
            capitalizeNext = (*p != ' ');
        }
    }
    result = temp;

    std::cout << result << std::endl;
    return 0;
}