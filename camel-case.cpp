```cpp
#include <string>
#include <cctype>

int main() {
    std::string str = "camel-case example-test-string";
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // Skip the hyphen
            if (i < str.length()) {
                result += toupper(str[i]);
            }
        } else if (i > 0) {
            if (i == str.length() || str[i + 1] == '-') {
                result += toupper(str[i]);
            } else {
                result += tolower(str[i]);
            }
        } else {
            result += tolower(str[i]);
        }
    }
    std::cout << result << std::endl;
    return 0;
}