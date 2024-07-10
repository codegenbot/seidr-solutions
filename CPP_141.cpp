#include <string>

string file_name_check(string file_name) {
    int digit_count = 0;
    int dot_count = 0;
    int dot_position = -1;
    string substr_before_dot;
    string substr_after_dot;

    for (int i = 0; i < file_name.size(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_position = i;
        }
    }

    if (digit_count > 3 || dot_count != 1 || dot_position == 0 || dot_position == file_name.size() - 1) {
        return "No";
    }

    substr_before_dot = file_name.substr(0, dot_position);
    substr_after_dot = file_name.substr(dot_position + 1);

    if (substr_before_dot.empty() || !(isalpha(substr_before_dot[0]))) {
        return "No";
    }

    if (substr_after_dot != "txt" && substr_after_dot != "exe" && substr_after_dot != "dll") {
        return "No";
    }

    return "Yes";
}