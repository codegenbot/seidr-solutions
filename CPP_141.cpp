```cpp
bool hasDigit = false;
int dotCount = 0;

for (char c : file_name) {
    if (c == '.') {
        dotCount++;
    } else if (isdigit(c)) {
        hasDigit = true;
    }
}

if (dotCount != 1 || hasDigit > 3) {
    return "No";
}

size_t pos = file_name.find('.');
string beforeDot = file_name.substr(0, pos);
string afterDot = file_name.substr(pos + 1);

if (!beforeDot.empty() && !isalpha(beforeDot[0])) {
    return "No";
}

vector<string> validExtensions = {"txt", "exe", "dll"};
if (find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end()) {
    return "No";
}

return "Yes";