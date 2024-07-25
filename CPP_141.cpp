#include <cctype>
#include <string>
using namespace std;

string file_name_check(string file_name) {
    int dot_count = 0;
    bool has_dot = false;
    for (char c : file_name) {
        if (isdigit(c)) {
            if (++dot_count > 3)
                return "No";
        } else if (c == '.') {
            has_dot = true;
            dot_count = 0;
        } else if (!has_dot && !isalpha(c))
            return "No";
    }
    if (!has_dot || file_name.find('.') == string::npos)
        return "No";
    size_t pos = file_name.find('.');
    string ext = file_name.substr(pos + 1);
    if (ext != "txt" && ext != "exe" && ext != "dll")
        return "No";
    return "Yes";
}