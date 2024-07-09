Here is the completed code:

```cpp
#include <cctype>
string file_name_check(string file_name) {
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            if (dot_count > 1) {
                valid = false;
                break;
            }
        } else if (!std::isalnum(c)) {
            valid = false;
            break;
        } else if (std::isdigit(c)) {
            digit_count++;
            if (digit_count > 3) {
                valid = false;
                break;
            }
        }
    }

    string extension;
    for (int i = file_name.find('.') + 1; i < file_name.size(); i++) {
        extension += file_name[i];
    }

    if (!valid || extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    } else {
        return "Yes";
    }
}