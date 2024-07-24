#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string str = "camel-case example-test-string";
    bool capitalizeNext = true;
    std::string result;

    for (const char* p = str; *p; p++) {
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