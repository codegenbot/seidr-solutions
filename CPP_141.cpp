```cpp
int digit_count = 0;
bool has_dot = false;
size_t dot_index = file_name.find(".");
if (dot_index != string::npos) {
    has_dot = true;
    size_t prefix_len = dot_index;
    for (char c : file_name.substr(0, prefix_len)) {
        if (!isalpha(c)) return "No";
    }
    string suffix = file_name.substr(dot_index + 1);
    for (char c : suffix) {
        if (!isalnum(c) && c != '.') return "No";
    }
    if (suffix == "txt" || suffix == "exe" || suffix == "dll") return "Yes";
}
for (char c : file_name) {
    if (isdigit(c)) digit_count++;
    if (c == '.') has_dot = true;
}
if (!has_dot) return "No";
if (digit_count > 3) return "No";
return "Yes";