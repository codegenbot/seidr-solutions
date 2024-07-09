#include <iostream>
#include <string>

using namespace std;

string file_name_check(string file_name) {
    bool has_dot = false;
    int digit_count = 0;
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] == '.') {
            has_dot = true;
        } else if (isdigit(file_name[i])) {
            digit_count++;
        }
    }
    string prefix = "";
    for (int i = 0; i < file_name.find('.'); i++) {
        if (!isalpha(file_name[i])) {
            return "No";
        }
        prefix += file_name[i];
    }
    string suffix = file_name.substr(file_name.find('.') + 1);
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }
    if (digit_count > 3 || !has_dot) {
        return "No";
    }
    if (prefix.empty()) {
        return "No";
    }
    return "Yes";
}

int main() {
    cout << file_name_check("example.txt") << endl; // Should print: Yes
    cout << file_name_check("1example.dll") << endl; // Should print: No
    return 0;
}