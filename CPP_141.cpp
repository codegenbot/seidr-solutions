#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

int count_digits(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (::isdigit(c)) { 
            count++;
        }
    }
    return count;
}

bool valid_file_name(std::string file_name) {
    size_t dot_pos = file_name.find('.');
    if (dot_pos == std::string::npos || dot_pos > file_name.size() - 4) {
        return false;
    }
    std::string before_dot = file_name.substr(0, dot_pos);
    std::string after_dot = file_name.substr(dot_pos + 1);

    if (!std::all_of(before_dot.begin(), before_dot.end(), ::isalpha)) { 
        return false;
    }

    std::vector<std::string> valid_extensions {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return false;
    }

    int digit_count = count_digits(file_name);
    return digit_count <= 3;
}

std::string file_name_check(std::string file_name) {
    return valid_file_name(file_name) ? "Yes" : "No";
}