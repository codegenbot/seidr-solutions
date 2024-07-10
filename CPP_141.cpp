bool has_digits = false;
int dot_count = 0;

for (char c : file_name) {
    if (c == '.') {
        dot_count++;
    } else if (isdigit(c)) {
        has_digits = true;
    }
}

if (dot_count != 1 || has_digits > 3) {
    return "No";
}

size_t pos = file_name.find('.');
string prefix = file_name.substr(0, pos);
string suffix = file_name.substr(pos + 1);

if (!isalpha(prefix[0]) || prefix.empty()) {
    return "No";
}

string valid_suffixes[] = {"txt", "exe", "dll"};
bool is_valid_suffix = false;

for (const string& s : valid_suffixes) {
    if (suffix == s) {
        is_valid_suffix = true;
        break;
    }
}

return is_valid_suffix ? "Yes" : "No";