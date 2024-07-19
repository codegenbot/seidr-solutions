#include <string>

string file_name_check(string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    bool starts_with_letter = true;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            has_dot = true;
        } else if (!isalpha(c)) {
            starts_with_letter = false;
            break;
        }
    }

    if (digit_count > 3 || !has_dot || starts_with_letter) {
        return "No";
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }

    return "Yes";
}