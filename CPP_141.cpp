#include <string>

std::string file_name_check(std::string file_name) {
    int count_digits = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count_digits++;
        }
    }

    size_t dot_pos = file_name.find(".");
    if (count_digits > 3 || dot_pos == std::string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    std::string before_dot = file_name.substr(0, dot_pos);
    std::string after_dot = file_name.substr(dot_pos + 1);

    if (!isalpha(before_dot[0]) || after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }

    return "Yes";
}