Here is the completed code:

```cpp
bool has_digits = false;
int dot_count = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!has_digits) {
            has_digits = true;
        }
        if (has_digits && has_digits++ > 3) {
            return "No";
        }
    } else if (c == '.') {
        dot_count++;
        if (dot_count > 1) {
            return "No";
        }
    }
}

if (file_name.find('.') == string::npos || file_name.find(' ') != string::npos || !isalpha(file_name[0])) {
    return "No";
}

string extension = file_name.substr(file_name.find('.') + 1);
if (!(extension == "txt" || extension == "exe" || extension == "dll")) {
    return "No";
}

return "Yes";