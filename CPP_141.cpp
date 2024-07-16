#include <string>
using namespace std;

string file_name_check(string file_name) {
    int count_digits = 0;
    int dot_index = -1;
    for (int i = 0; i < file_name.size(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            count_digits++;
        } else if (file_name[i] == '.') {
            dot_index = i;
        }
    }
    if (count_digits > 3 || dot_index == -1 || dot_index == 0 || dot_index == file_name.size() - 1) {
        return "No";
    }
    string before_dot = file_name.substr(0, dot_index);
    string after_dot = file_name.substr(dot_index + 1);
    if (!(before_dot[0] >= 'a' && before_dot[0] <= 'z') && !(before_dot[0] >= 'A' && before_dot[0] <= 'Z')) {
        return "No";
    }
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }
    return "Yes";
}