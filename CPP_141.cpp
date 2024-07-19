#include <string>

std::string check_file_validity(std::string file_name) {
    int digit_count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        }
    }

    size_t dot_pos = file_name.find(".");
    if (digit_count > 3 || dot_pos == std::string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    std::string prefix = file_name.substr(0, dot_pos);
    std::string suffix = file_name.substr(dot_pos + 1);

    if (!isalpha(prefix[0]) || suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }

    return "Yes";
}