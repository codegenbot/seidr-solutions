```
int digit_count = 0;
bool has_dot = false;
char prev_char = 'a';

for (char c : file_name) {
    if (c >= '0' && c <= '9') {
        digit_count++;
    } else if (c == '.') {
        has_dot = true;
    } else if (c < 'A' || c > 'Z' && c < 'a' || c > 'z') {
        prev_char = c;
    }
}

if (!has_dot) return "No";
if (digit_count > 3) return "No";

string suffix = file_name.substr(file_name.find('.') + 1);
vector<string> valid_suffixes = {"txt", "exe", "dll"};
if (find(valid_suffixes.begin(), valid_suffixes.end(), suffix) == valid_suffixes.end()) {
    return "No";
}

return prev_char >= 'A' && prev_char <= 'Z' ? "Yes" : "No";