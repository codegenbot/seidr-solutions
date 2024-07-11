Here is the completed code:

```cpp
bool hasDigit = false;
int dotCount = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!hasDigit) {
            hasDigit = true;
        }
        if (hasDigit && ++dotCount > 3) {
            return "No";
        }
    } else if (c == '.') {
        dotCount++;
    } else if (c == ' ' || c < 'A' || c > 'Z' || c < 'a' || c > 'z') {
        return "No";
    }
}

if (dotCount != 1) {
    return "No";
}

size_t pos = file_name.find('.');
string beforeDot = file_name.substr(0, pos);
string afterDot = file_name.substr(pos + 1);

vector<string> validExtensions = {"txt", "exe", "dll"};
if (find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end()) {
    return "No";
}

return "Yes";