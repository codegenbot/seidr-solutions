#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string file_name_check(string file_name) {

    int digit_count = 0;
    int dot_count = 0;
    string before_dot, after_dot;
    
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digit_count++;
        } else if (c == '.') {
            dot_count++;
        } else if (dot_count == 0) {
            before_dot += c;
        } else {
            after_dot += c;
        }
    }
    
    if (digit_count > 3 || dot_count != 1 || before_dot.empty() || !isalpha(before_dot[0]) || (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")) {
        return "No";
    }
    
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    
    return 0;
}