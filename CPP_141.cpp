```cpp
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int count_digits(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::isdigit(c)) {
            count++;
        }
    }
    return count;
}

std::string file_name_check(std::string file_name) {
    if (count_digits(file_name) > 3) {
        return "No";
    }
    size_t dot_pos = file_name.find('.');
    if (dot_pos == std::string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }
    std::string before_dot = file_name.substr(0, dot_pos);
    std::string after_dot = file_name.substr(dot_pos + 1);
    if (!before_dot.empty() && !std::isalpha(before_dot[0])) {
        return "No";
    }
    std::vector<std::string> allowed_extensions = {"txt", "exe", "dll"};
    if (std::find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()) {
        return "No";
    }
    return "Yes";
}