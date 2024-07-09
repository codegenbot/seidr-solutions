```cpp
int digit_count = 0;
bool has_dot = false;
size_t dot_pos = string::npos;

for (char c : file_name) {
    if (isdigit(c)) {
        digit_count++;
    } else if (c == '.') {
        has_dot = true;
        dot_pos = file_name.find(c);
    }
}

if (digit_count > 3 || !has_dot || dot_pos == string::npos) {
    return "No";
}

string before_dot = file_name.substr(0, dot_pos);
string after_dot = file_name.substr(dot_pos + 1);

if (!before_dot.empty() && isalpha(before_dot[0])) {
    if (after_dot == "txt" || after_dot == "exe" || after_dot == "dll") {
        return "Yes";
    }
}

return "No";