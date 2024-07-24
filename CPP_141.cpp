#include <iostream>
#include <string>
using namespace std;

int file_name_check(string file_name) {
    int i = 0, j = 0, digit_count = 0;
    while (i < file_name.size()) {
        if (isdigit(file_name[i])) {
            digit_count++;
            i++;
            while (i < file_name.size() && isdigit(file_name[i]))
                i++;
        } else if (file_name[i] == '.') {
            j = i + 1;
            break;
        } else
            i++;
    }
    if (j != file_name.size()) {
        string before_dot = file_name.substr(0, j);
        string after_dot = file_name.substr(j + 1);
        if (digit_count > 3 || before_dot.empty() || !isalpha(before_dot[0]) ||
            (after_dot != "txt" && after_dot != "exe" && after_dot != "dll"))
            return "No";
    }
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    cout << file_name_check("a.txt") << endl;
    return 0;
}