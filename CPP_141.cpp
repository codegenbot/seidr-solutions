#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

string file_name_check(const string& file_name) {
    int digit_count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        }
    }

    size_t dot_pos = file_name.find(".");
    if (digit_count > 3 || dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string prefix = file_name.substr(0, dot_pos);
    string suffix = file_name.substr(dot_pos + 1);

    if (!isalpha(prefix[0]) || (suffix != "txt" && suffix != "exe" && suffix != "dll")) {
        return "No";
    }

    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    assert(file_name_check("file_123.txt") == "Yes");
    assert(file_name_check("file1.txt") == "Yes");
    assert(file_name_check("file_123.exe") == "Yes");
    assert(file_name_check("123file.txt") == "No");
    assert(file_name_check("file_exe.dll") == "No");
    assert(file_name_check("file.txt") == "No");
    return 0;
}