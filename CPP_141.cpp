#include <cctype>
#include <string>

std::string file_name_check(std::string file_name) {
    int len = file_name.length();
    int dot_count = 0;
    int digit_count = 0;
    int dot_position = -1;

    for (int i = 0; i < len; ++i) {
        if (isdigit(file_name[i])) {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_position = i;
        }
    }

    if (dot_count != 1 || digit_count > 3 || dot_position == 0 || dot_position == len - 1) {
        return "No";
    }

    if (!isalpha(file_name[0])) {
        return "No";
    }

    std::string extension = file_name.substr(dot_position + 1);
    if (extension == "txt" || extension == "exe" || extension == "dll") {
        return "Yes";
    }

    return "No";
}