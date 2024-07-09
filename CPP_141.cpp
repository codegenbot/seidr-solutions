#include <iostream>
#include <string>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot && !isalpha(c))
            return "No";

        if (found_dot) {
            std::string extension = file_name.substr(file_name.find('.') + 1);
            if (!(extension == "txt" || extension == "exe" || extension == "dll"))
                return "No";
        }
    }

    return found_dot && digit_count <= 3 ? "Yes" : "No";
}