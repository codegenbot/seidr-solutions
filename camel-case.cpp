```cpp
#include <iostream>
#include <string>

int main() {
    const char* str = "camel-case example-test-string";
    std::string result;
    bool capitalizeNext = true;

    for (const char* p = str; *p; p++) {
        if (*p == '-') {
            p++; // Skip the '-'
            if (!capitalizeNext) {
                char c = (*p);
                if (capitalizeNext) {
                    result += toupper(c);
                } else {
                    result += tolower(c);
                }
                capitalizeNext = false;
            }
        } else if (capitalizeNext) {
            char c = (*p);
            if (capitalizeNext) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            capitalizeNext = false;
        } else {
            char c = (*p);
            result += tolower(c);
        }
    }

    std::cout << result.c_str() << std::endl;

    return 0;
}