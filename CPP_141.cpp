```cpp
int digit_count = 0;
bool has_dot = false;

for (char c : file_name) {
    if (isdigit(c)) {
        digit_count++;
        if (digit_count > 3) return "No";
    } else if (c == '.') {
        has_dot = true;
    } else if (!has_dot && !isalpha(c)) {
        return "No";
    }
}

if (!has_dot || file_name.find('.') == string::npos) return "No";

string ext = file_name.substr(file_name.find('.') + 1);
vector<string> valid_exts = {"txt", "exe", "dll"};

if (find(valid_exts.begin(), valid_exts.end(), ext) == valid_exts.end()) {
    return "No";
}

return "Yes";