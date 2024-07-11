#include <string>
#include <iostream>

std::string file_name_check(std::string filename) {
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    for (char c : filename) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "Invalid";
        } else if (c == '.') {
            found_dot = true;
        } else {
            if (digit_count > 0)
                valid_prefix = false;
        }
    }

    if (digit_count <= 3 && found_dot && valid_prefix)
        return "Valid";
    else
        return "Invalid";
}

int main() {
    std::cout << file_name_check("s.") << std::endl; // Correct usage
    return 0;
}