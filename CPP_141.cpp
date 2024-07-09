```
#include <string>
#include <algorithm>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    std::string prefix;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot) {
            prefix += c;
        }
    }

    return (digit_count <= 3 && found_dot && !prefix.empty() && isalpha(prefix[0]) &&
           std::find({"txt", "exe", "dll"}, file_name.substr(file_name.find('.') + 1)) !=
           std::end({"txt", "exe", "dll"})
           ? "Yes" : "No";
}