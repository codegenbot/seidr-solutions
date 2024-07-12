```cpp
#include <string>
#include <cctype>

using namespace std;

int count_digits(const string& s) {
    int count = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digit_count = count_digits(file_name);
    if (digit_count > 3 || file_name.find('.') == string::npos) {
        return "No";
    }
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0 || !isalpha(file_name[0])) {
        return "No";
    }
    string extension = file_name.substr(dot_pos + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    return "Yes";
}