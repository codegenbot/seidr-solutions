Here is the completed code:

```cpp
bool hasDigit = false;
int dotCount = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!hasDigit) {
            hasDigit = true;
        } else {
            return "No";
        }
    }

    if (c == '.') {
        dotCount++;
    }
}

if (dotCount > 1 || !hasDigit || file_name[0] < 'a' && file_name[0] > 'z' && file_name[0] < 'A' && file_name[0] > 'Z') {
    return "No";
}

string extension = "";
for (int i = file_name.find('.') + 1; i < file_name.length(); i++) {
    if (file_name[i] == '.') {
        break;
    }
    extension += file_name[i];
}

if (extension != "txt" && extension != "exe" && extension != "dll") {
    return "No";
}

return "Yes";