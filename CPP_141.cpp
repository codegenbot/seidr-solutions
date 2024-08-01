```cpp
int count_digits = 0;
bool has_dot = false;
size_t dot_position = string::npos;

for (char c : file_name) {
    if (isdigit(c)) {
        count_digits++;
    } else if (c == '.') {
        has_dot = true;
        dot_position = file_name.find(c);
    }
}

if (count_digits > 3 || !has_dot || dot_position == string::npos) {
    return "No";
}

string before_dot = file_name.substr(0, dot_position);
string after_dot = file_name.substr(dot_position + 1);

if (!before_dot.empty() && isalpha(before_dot[0])) {
    if (after_dot == "txt" || after_dot == "exe" || after_dot == "dll") {
        return "Yes";
    }
}

return "No";