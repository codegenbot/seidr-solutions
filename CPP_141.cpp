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
            if (!std::isalpha(c))
                valid_prefix = false;
            if (digit_count > 0) {
                valid_prefix = false;
            }
        }
    }

    if (!valid_prefix || digit_count <= 3 && found_dot)
        return "No";
    else
        return "Yes";
}