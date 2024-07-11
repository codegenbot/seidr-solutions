#include <string>
#include <cassert>

std::string file_name_check(std::string filename) {
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    for (char c : filename) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (c == '.') {
            found_dot = true;
        } else {
            if (!found_dot && !std::string("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ").find(std::toupper(c)) && digit_count > 0) {
                valid_prefix = false;
                break;
            }
        }
    }

    if (digit_count <= 3 && found_dot && valid_prefix)
        return "Yes";
    else
        return "No";
}