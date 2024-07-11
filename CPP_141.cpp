```#include <string>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    std::string prefix = "";
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            found_dot = true;
        }
        prefix += c;
    }
    return (digit_count <= 3 && found_dot && prefix.find('.') != std::string::npos) ? "Yes" : 
           (!found_dot && !std::all_of(file_name.begin() + digit_count, file_name.end(), ::isalpha())) ? "No" : "Yes";
}```