Here is the completed code:

```cpp
int count_digits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos > 1) {
        return "No";
    }
    
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!before_dot.empty() && !isalpha(before_dot[0])) {
        return "No";
    }

    int digit_count = count_digits(file_name);
    if (digit_count > 3) {
        return "No";
    }

    string allowed_extensions[] = {"txt", "exe", "dll"};
    bool found = false;
    for (const string& extension : allowed_extensions) {
        if (after_dot == extension) {
            found = true;
            break;
        }
    }

    if (!found) {
        return "No";
    }

    return "Yes";
}