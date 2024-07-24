#include <iostream>
#include <string>

int main() {
    std::string str = "camel-case example-test-string";
    std::string result;
    bool capitalizeNext = true;

    for (char* p = str.c_str(); *p; p++) {
        if (*p == '-') {
            capitalizeNext = true;
            p++;
        } else if (capitalizeNext) {
            result += toupper(*p);
            capitalizeNext = false;
        } else {
            result += tolower(*p);
        }
    }

    std::cout << result << std::endl;

    return 0;
}