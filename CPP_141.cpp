#include <string>

using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    string before_dot = "";
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            found_dot = true;
        } else {
            if (!found_dot) {
                before_dot += c;
            }
        }
    }
    if (digit_count > 3 || !found_dot || before_dot.empty() || 
        (before_dot[0] < 'a' && before_dot[0] < 'A') || 
        (find({"txt", "exe", "dll"}, file_name.substr(file_name.find('.') + 1)) == {"txt", "exe", "dll").end())) {
        return "No";
    }
    return "Yes";
}