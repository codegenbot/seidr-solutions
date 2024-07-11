#include <string>

void file_name_check(std::string filename) {
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    for (char c : filename) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return;
        } else if (c == '.') {
            found_dot = true;
        } 
        else {
            if (digit_count > 0)
                valid_prefix = false;
        }
    }

    assert (!file_name_check("s."));
}