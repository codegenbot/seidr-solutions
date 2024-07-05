#include <cctype>
#include <algorithm>
#include <string>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    int dotPos = file_name.find('.');
    if (dotPos == std::string::npos || dotPos == 0 || dotPos == file_name.length() - 1) {
        return "No";
    }

    std::string beforeDot = file_name.substr(0, dotPos);
    std::string afterDot = file_name.substr(dotPos + 1);
    
    if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }

    if (!isalpha(beforeDot[0])) {
        return "No";
    }

    int digitCount = std::count_if(beforeDot.begin(), beforeDot.end(), ::isdigit);
    if (digitCount > 3) {
        return "No";
    }

    return "Yes";
}

int main() {
    assert(file_name_check("file.txt") == "Yes");
    assert(file_name_check("1234file.txt") == "No");
    assert(file_name_check("file.ext") == "No");
    assert(file_name_check(".txt") == "No");
    assert(file_name_check("file.") == "No");
    return 0;
}