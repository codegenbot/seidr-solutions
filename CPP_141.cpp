#include <cctype>
#include <string>
using namespace std;

string file_name_check(string file_name) {
    int dot_count = 0;
    bool has_dot = false;
    int digit_count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            dot_count++;
            has_dot = true;
        } else if (!has_dot && !isalpha(c)) {
            return "No";
        }
    }
    if (dot_count > 1 || digit_count > 3) {
        return "No";
    }
    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    return "Yes";
}