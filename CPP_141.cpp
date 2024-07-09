#include <string>

using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    string before_dot, after_dot;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            has_dot = true;
        } else if (!has_dot) {
            before_dot += c;
        } else {
            after_dot = c;
        }
    }

    if (digit_count > 3 || !before_dot.size() || !isalpha(before_dot[0]) ||
        !has_dot || after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    } else {
        return "Yes";
    }
}