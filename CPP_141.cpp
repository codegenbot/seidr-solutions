Here is the completed code:

```cpp
bool has_digits = false;
int dot_count = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        has_digits |= true;
    } else if (c == '.') {
        dot_count++;
    }
}

if (dot_count != 1 || has_digits > 3) {
    return "No";
}

string before_dot = "";
string after_dot = "";

for (char c : file_name) {
    if (c == '.') {
        break;
    }
    before_dot += c;
}

for (char c : file_name.substr(file_name.find('.') + 1)) {
    after_dot += c;
}

if (!before_dot.empty() && !all_of(before_dot.begin(), before_dot.end(), ::isalpha) ||
    (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")) {
    return "No";
}

return "Yes";