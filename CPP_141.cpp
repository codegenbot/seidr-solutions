Here is the completed code:

```cpp
int digit_count = 0;
bool valid_dot = false;

for (char c : file_name) {
    if (isdigit(c)) {
        digit_count++;
        if (digit_count > 3) return "No";
    } else if (c == '.') {
        valid_dot = true;
    } else if (!valid_dot && !isalpha(c)) {
        return "No";
    }
}

if (!valid_dot || file_name.find('.') == string::npos) {
    return "No";
}

size_t dot_pos = file_name.find('.');
string extension = file_name.substr(dot_pos + 1);
vector<string> valid_extensions = {"txt", "exe", "dll"};
if (find(valid_extensions.begin(), valid_extensions.end(), extension) == valid_extensions.end()) {
    return "No";
}

return "Yes";