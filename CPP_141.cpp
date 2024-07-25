Here is the completed code:

```cpp
bool has_digit = false;
int dot_count = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!has_digit) {
            has_digit = true;
        }
        else {
            return "No";
        }
    }
    else if (c == '.') {
        dot_count++;
        if (dot_count > 1) {
            return "No";
        }
    }
}

if (has_digit && dot_count != 1) {
    return "No";
}

string extension = file_name.substr(file_name.find('.') + 1);
vector<string> valid_extensions = {"txt", "exe", "dll"};

if (find(valid_extensions.begin(), valid_extensions.end(), extension) == valid_extensions.end()) {
    return "No";
}

return "Yes";