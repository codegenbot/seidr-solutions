#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digits = 0;
    int dot_count = 0;
    string substr_before_dot, substr_after_dot;

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digits++;
        } else if (c == '.') {
            dot_count++;
        } else {
            if (dot_count == 0) {
                substr_before_dot += c;
            } else {
                substr_after_dot += c;
            }
        }
    }

    if (digits <= 3 && dot_count == 1 && substr_before_dot.length() > 0 &&
        isalpha(substr_before_dot[0]) && (substr_after_dot == "txt" || substr_after_dot == "exe" || substr_after_dot == "dll")) {
        return "Yes";
    } else {
        return "No";
    }
}