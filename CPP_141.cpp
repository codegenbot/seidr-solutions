#include <string>
#include <cassert>

std::string file_name_check(std::string filename) {
    int digit_count = 0;
    bool found_dot = false;

    for (char c : filename) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (c == '.') {
            found_dot = true;
        } else {
            if (!found_dot && !isalpha(c))
                return "No";
        }
    }

    if (digit_count <= 3 && found_dot)
        return "Yes";
    else
        return "No";
}