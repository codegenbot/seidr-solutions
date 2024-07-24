#include <string>
#include <algorithm>

std::string file_name_check(const std::string& filename) {
    int i = 0, j = 0, digit_count = 0;
    while (i < filename.size()) {
        if (isdigit(filename[i])) {
            digit_count++;
            i++;
            while (i < filename.size() && isdigit(filename[i]))
                i++;
        } else if (filename[i] == '.') {
            j = i + 1;
            break;
        } else
            i++;
    }
    if (j != filename.size()) {
        std::string before_dot = filename.substr(0, j);
        std::string after_dot = filename.substr(j + 1);
        if (digit_count > 3 || before_dot.empty() || !isalpha(before_dot[0]) ||
            (after_dot != "txt" && after_dot != "exe" && after_dot != "dll"))
            return "No";
    }
    return "Yes";
}