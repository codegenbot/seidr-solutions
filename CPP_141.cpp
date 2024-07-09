#include <iostream>
#include <string>
#include <cctype>

std::string file_name_check(const std::string& file_name) {
    int digit_count = 0;
    for (char c : file_name) {
        if (std::isdigit(c)) {
            digit_count++;
        }
    }

    size_t dot_pos = file_name.find('.');
    if (digit_count > 3 || dot_pos == std::string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    std::string file_extension = file_name.substr(dot_pos + 1);
    if (file_extension != "txt" && file_extension != "exe" && file_extension != "dll") {
        return "No";
    }

    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    // Add more test cases here
    return 0;
}