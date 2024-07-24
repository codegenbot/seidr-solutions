```cpp
#include <iostream>
#include <string>

int main() {
    std::string str;
    bool capitalizeNext = true;
    std::string result;

    std::cin >> str;

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
            if (capitalizeNext) {
                result += toupper(*p);
            } else {
                result += tolower(*p);
            }
            capitalizeNext = true;
        }
    }

    std::cout << result.c_str() << std::endl;

    return 0;
}