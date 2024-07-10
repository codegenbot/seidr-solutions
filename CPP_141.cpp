Here is the completed code:

```cpp
string file_name_check(string file_name) {
    int digit_count = 0, dot_count = 0;
    bool valid = true;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
        }
    }

    if (digit_count > 3 || dot_count != 1) {
        valid = false;
    } else {
        string prefix = file_name.substr(0, file_name.find('.'));
        if (!isalpha(prefix[0]) || !isalpha(prefix[1])) {
            valid = false;
        }
        string suffix = file_name.substr(file_name.find('.') + 1);
        if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
            valid = false;
        }
    }

    return valid ? "Yes" : "No";
}