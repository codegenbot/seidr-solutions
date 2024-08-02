Here is the completed code:

```cpp
int digit_count = 0;
bool has_dot = false;
size_t dot_index = string::npos;

for (char c : file_name) {
    if (isdigit(c)) {
        digit_count++;
    } else if (c == '.') {
        has_dot = true;
        dot_index = file_name.find(c);
    }
}

if (!has_dot || dot_index == 0 || dot_index == string::npos) {
    return "No";
}

string before_dot = file_name.substr(0, dot_index);
string after_dot = file_name.substr(dot_index + 1);

if (digit_count > 3 || !isalpha(before_dot[0]) || after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
    return "No";
}

return "Yes";