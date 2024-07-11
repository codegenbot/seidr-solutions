#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    for (int i = 0; i < file_name.length(); i++) {
        char c = file_name[i];
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (c == '.') {
            has_dot = true;
        } else if (!has_dot && !isalpha(c))
            return "No";
    }
    if (!has_dot || file_name.find('.') == string::npos)
        return "No";
    size_t pos = file_name.find('.');
    string before_dot = file_name.substr(0, pos);
    string after_dot = file_name.substr(pos + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end())
        return "No";
    return "Yes";
}