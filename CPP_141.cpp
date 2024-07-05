#include <cctype>
#include <algorithm>
#include <string> // Include this header for string
using namespace std; // Use the std namespace

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
    // Test cases
    assert (file_name_check("file.txt") == "Yes");
    assert (file_name_check("s.") == "No");
    // Add more test cases as needed
    return 0;
}