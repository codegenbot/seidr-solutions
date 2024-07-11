#include <string>

using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    string prefix = "";
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot && !isalpha(c)) {
            return "No";
        }
        prefix += c;
    }
    if (!found_dot || prefix.empty() || prefix.find('.') != string::npos) {
        return "No";
    }
    size_t dot_pos = file_name.find('.');
    string suffix = file_name.substr(dot_pos + 1);
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }
    return "Yes";
}