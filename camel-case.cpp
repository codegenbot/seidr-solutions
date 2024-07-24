```c++
#include <iostream>
#include <string>

const char* str = "camel-case example-test-string";

int main() {
    std::string result;
    size_t start = 0;
    for (size_t i = 0; i <= strlen(str); ++i) {
        if (str[i] == '-' || i == strlen(str)) {
            if (start < i) {
                char c = toupper(str[start]);
                result += c;
                while (++start < i) {
                    result += tolower(str[start]);
                }
            }
            if (i != strlen(str)) {
                result += ' ';
            }
        }
    }
    std::cout << result << std::endl;
    return 0;
}