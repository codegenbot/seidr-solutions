#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    int dot_count = 0;
    string substr_before_dot, substr_after_dot;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            dot_count++;
        } else if (c == ' ') {
            return "No";
        } else if (dot_count == 0) {
            substr_before_dot += c;
        } else if (dot_count == 1) {
            substr_after_dot += c;
        }
    }

    if (digit_count > 3 || dot_count != 1 || substr_before_dot.empty() || !isalpha(substr_before_dot[0])) {
        return "No";
    }

    if (substr_after_dot != "txt" && substr_after_dot != "exe" && substr_after_dot != "dll") {
        return "No";
    }

    return "Yes";
}