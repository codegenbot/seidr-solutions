#include <iostream>
#include <string>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    if (file_name.empty()) return "No";
    size_t dotPos = file_name.find(".");
    if (dotPos == std::string::npos || dotPos == 0 || dotPos == file_name.size() - 1) return "No";
    std::string beforeDot = file_name.substr(0, dotPos);
    std::string afterDot = file_name.substr(dotPos + 1);
    if (beforeDot.find_first_of("0123456789") != std::string::npos || beforeDot.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) return "No";
    if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") return "No";
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    // Add more test cases here
    return 0;
}