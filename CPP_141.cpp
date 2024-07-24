#include <iostream>
#include <cctype>
#include <string>

bool hasDigit = false;
int dotCount = 0;

for (char c : file_name) {
    if (std::isdigit(c)) {
        if (!hasDigit) {
            hasDigit = true;
        }
        else {
            return false;
        }
    }
    else if (c == '.') {
        dotCount++;
    }
}

if (dotCount != 1 || !file_name.empty()) {
    return false;
}

size_t pos = file_name.find('.');
std::string beforeDot = file_name.substr(0, pos);
std::string afterDot = file_name.substr(pos + 1);

if (!std::isalpha(beforeDot[0]) || afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
    return false;
}

return true;