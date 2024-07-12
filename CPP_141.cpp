int digit_count = 0;
bool found_dot = false;
bool valid_prefix = true;

for (char c : file_name) {
    if (isdigit(c)) {
        digit_count++;
    } else if (c == '.') {
        found_dot = true;
    } else if (!found_dot && !isalpha(c)) {
        valid_prefix = false;
    }
}

if (digit_count > 3 || !found_dot || !valid_prefix) {
    return "No";
} else {
    size_t dot_pos = file_name.find('.');
    string suffix = file_name.substr(dot_pos + 1);
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    } else {
        return "Yes";
    }
}