Here is the completed code:

```cpp
bool has_digits = false;
int dot_count = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!has_digits) {
            has_digits = true;
        }
        if (has_digits && has_digits++ > 3) {
            return "No";
        }
    } else if (c == '.') {
        dot_count++;
        if (dot_count > 1) {
            return "No";
        }
    } else if (!isalpha(c)) {
        return "No";
    }
}

if (has_digits || dot_count != 1) {
    return "No";
}

size_t pos = file_name.find('.');
string prefix = file_name.substr(0, pos);
string suffix = file_name.substr(pos + 1);

if (!(prefix[0] >= 'A' && prefix[0] <= 'Z') && !(prefix[0] >= 'a' && prefix[0] <= 'z')) {
    return "No";
}

vector<string> valid_suffixes = {"txt", "exe", "dll"};
if (find(valid_suffixes.begin(), valid_suffixes.end(), suffix) == valid_suffixes.end()) {
    return "No";
}

return "Yes";