```cpp
#include <string>
#include <cctype>

bool isAlpha(const char c) { return std::isalpha(c); }

int file_name_check(std::string file_name) {
    bool hasDigit = false;
    int dotCount = 0;

    for (char c : file_name) {
        if (isdigit(c)) {
            if (!hasDigit) {
                hasDigit = true;
            }
            else {
                return 0;
            }
        }
        else if (c == '.') {
            dotCount++;
        }
    }

    if (dotCount != 1 || !file_name.empty()) {
        return 0;
    }

    size_t pos = file_name.find('.');
    std::string beforeDot = file_name.substr(0, pos);
    std::string afterDot = file_name.substr(pos + 1);

    if (!isAlpha(beforeDot[0]) || afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return 0;
    }

    return 1;
}