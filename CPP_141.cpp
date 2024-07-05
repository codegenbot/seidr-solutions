#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

string file_name_check(string file_name) {
    int dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) return "No";
    
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);
    
    if (!isalpha(before_dot[0])) return "No";
    
    int digit_count = count_if(before_dot.begin(), before_dot.end(), ::isdigit);
    if (digit_count > 3) return "No";
    
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";
    
    return "Yes";
}

int main() {
    cout << file_name_check("s.") << endl;          // No
    cout << file_name_check("s.txt") << endl;       // Yes
    cout << file_name_check("1file.txt") << endl;   // No
    cout << file_name_check("file1234.txt") << endl;// No
    cout << file_name_check("file123.txt") << endl; // Yes

    return 0;
}