#include <iostream>
#include <string>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool has_dot = false;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            has_dot = true;
        }
    }

    if (digit_count > 3 || !has_dot) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!before_dot.size() || !isalpha(before_dot[0])) {
        return "No";
    }

    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }

    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    return 0;
}