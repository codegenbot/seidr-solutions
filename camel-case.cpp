```
#include <string>
#include <cctype>

int main() {
    std::cout << camelCase("camel-case example-test-string") << std::endl;
    return 0;
}

std::string camelCase(const std::string& s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') {
            if (c == '-') {
                result += std::toupper(s[s.find(c) + 1]);
                s.erase(s.find(c), 1);
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += c;
        }
    }

    return result;
}