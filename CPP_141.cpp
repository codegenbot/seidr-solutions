#include <iostream>
#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    string before_dot = "";
    string after_dot = "";

    for (int i = 0; i < file_name.size(); i++) {
        char c = file_name[i];
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            has_dot = true;
        } else if (!has_dot) {
            before_dot += c;
        } else {
            after_dot += c;
        }
    }

    if (!before_dot.size() || !after_dot.size()) return "No";

    string extensions[] = {"txt", "exe", "dll"};
    for (string ext : extensions) {
        if (after_dot == ext) return "Yes";
    }

    return "No";
}

int main() {
    cout << file_name_check("example.txt") << endl;  // Should print: Yes
    cout << file_name_check("1example.dll") << endl;  // Should print: No
    return 0;
}