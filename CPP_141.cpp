Here is the completed code:

```cpp
bool has_digit = false;
int dot_count = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!has_digit) {
            has_digit = true;
        } else {
            return "No";
        }
    } else if (c == '.') {
        dot_count++;
        if (dot_count > 1) {
            return "No";
        }
    }
}

if (file_name.find('.') != string::npos) {
    string suffix = file_name.substr(file_name.find('.') + 1);
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }
} else {
    if (!isalpha(file_name[0])) {
        return "No";
    }
}

if (has_digit || dot_count > 1) {
    return "No";
}

return "Yes";