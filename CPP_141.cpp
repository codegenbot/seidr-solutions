#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
using namespace std;

string file_name_check(string file_name) {
    int dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1)
        return "No";

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
        return "No";

    if (!isalpha(before_dot[0]))
        return "No";

    int digit_count = 0;
    for (char c : before_dot) {
        if (isdigit(c))
            digit_count++;
    }

    if (digit_count > 3)
        return "No";

    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    assert(file_name_check("s.exe") == "Yes");
    assert(file_name_check("1.dll") == "No");
    assert(file_name_check("1.234.txt") == "No");
    assert(file_name_check("abc4.txt") == "Yes");
    cout << "All tests passed!" << endl;
    return 0;
}