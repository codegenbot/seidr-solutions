Here is the completed code:

```cpp
bool has_digit = false;
int dot_count = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!has_digit) {
            has_digit = true;
            --; // More than three digits
        }
    } else if (c == '.') {
        dot_count++;
    } else if (!dot_count && !isalpha(c)) {
        return "No";
    }
}

if (dot_count != 1 || has_digit || file_name.find('.') == string::npos) {
    return "No";
}

string extension = file_name.substr(file_name.find('.') + 1);
if (extension != "txt" && extension != "exe" && extension != "dll") {
    return "No";
}

return "Yes";