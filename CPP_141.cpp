Here is the completed code:

```cpp
bool hasDigit = false;
int dotCount = 0;

for (char c : file_name) {
    if (c >= '0' && c <= '9') {
        if (!hasDigit) hasDigit = true; // first digit encountered, check not exceeded
        else return "No"; // more than one digit found
    } else if (c == '.') dotCount++;
    else if (!isalpha(c)) { // not a letter and not a digit
        if (dotCount != 1) return "No";
        string extension = file_name.substr(file_name.find('.') + 1);
        if (extension != "txt" && extension != "exe" && extension != "dll") return "No";
    }
}

if (hasDigit || dotCount > 1) return "No";
return "Yes";