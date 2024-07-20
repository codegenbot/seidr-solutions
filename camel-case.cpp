```cpp
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool upper = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result += toupper(result[0]);
                result.erase(0, 1);
            }
            upper = true;
        } else if (upper) {
            result += toupper(c);
            upper = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}