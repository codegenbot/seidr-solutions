#include <string>

using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    string before_dot = "";
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot) {
            before_dot += c;
        }
    }

    if (!before_dot.size()) return "No";
    if (!isalpha(before_dot[0])) return "No";

    string after_dot = file_name.substr(file_name.find('.') + 1);
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";

    return "Yes";
}