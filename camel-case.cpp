````
#include <string>

int main() {
    std::string input = "camel-case example-test-string";
    std::string result;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            result += ' ';
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    std::cout << result << std::endl;

    return 0;
}