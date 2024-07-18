#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    int digitCount = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    assert(digitCount <= 3);

    size_t dotPos = file_name.find('.');
    if (dotPos == std::string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }

    std::string beforeDot = file_name.substr(0, dotPos);
    std::string afterDot = file_name.substr(dotPos + 1);

    if (!isalpha(beforeDot[0])) {
        return "No";
    }

    if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }

    return "Yes";
}