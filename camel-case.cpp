```c++
#include <iostream>
#include <string>

int main() {
    const char* str = "camel-case example-test-string";
    std::string result;
    bool capitalizeNext = true;

    for (const char* p = str; *p; p++) {
        if (*p == '-') {
            result += ' '; // Add space here
            capitalizeNext = true;
            p++;
        } else if (capitalizeNext) {
            result += toupper(*p);
            capitalizeNext = false;
        } else {
            result += tolower(*p);
        }
    }

    std::cout << result.c_str() << std::endl;

    return 0;
}