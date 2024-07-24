#include <string>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    for (int i = 0; i < file_name.length(); i++) {
        if (!found_dot && file_name[i] == '.') {
            found_dot = true;
        } else if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) return "No";
        }
    }
    if (!found_dot || !isalpha(file_name[0])) return "No";
    std::string ext = file_name.substr(file_name.find('.') + 1);
    std::vector<std::string> valid_exts = {"txt", "exe", "dll"};
    if (find(valid_exts.begin(), valid_exts.end(), ext) == valid_exts.end()) return "No";
    return "Yes";