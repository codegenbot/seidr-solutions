#include <iostream>
#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            has_dot = true;
        } else if (!has_dot && !isalpha(c)) return "No";
    }
    if (!has_dot || file_name.find('.') == string::npos) return "No";
    size_t dot_pos = file_name.find('.');
    string ext = file_name.substr(dot_pos + 1);
    if (ext != "txt" && ext != "exe" && ext != "dll") return "No";
    return "Yes";
}

int main() {
    cout << file_name_check("example.txt") << endl; // Yes
    cout << file_name_check("1example.dll") << endl; // No
    return 0;
}