#include <string>

void foo() {
    std::string str = "camel-case example-test-string";
    std::string result;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == '-') {
            result += toupper(str[i + 1]);
            i++;
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
}