#include <string>
#include <cctype>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result += toupper(result[0]);
                } else {
                    result.push_back(' ');
                }
                capitalizeNext = true;
                result.pop_back();
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
            capitalizeNext = c == '-' || c == ' ';
        }
    }

    if (result.size() > 0 && !capitalizeNext) {
        if (!result.empty()) {
            if (capitalizeNext) {
                result[0] = toupper(result[0]);
            } else {
                result.push_back(' ');
            }
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << kebabToCamel(input) << std::endl;
    return 0;
}