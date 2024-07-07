#include <string>

bool file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) {
                return false;
            }
        } else if (file_name[i] == '.') {
            found_dot = true;
        } else if (found_dot && (i != file_name.length() - 4 || !std::string(file_name.substr(i)).compare("txt") || !std::string(file_name.substr(i)).compare("exe") || !std::string(file_name.substr(i)).compare("dll"))) {
            return false;
        }
    }

    if (!found_dot) {
        return false;
    } else if (digit_count > 0) {
        return false;
    }
    return true;
}