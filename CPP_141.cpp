Here is the completed code:

```cpp
int countDigits(string s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digitCount = countDigits(file_name);
    if (digitCount > 3) return "No";

    size_t dotPos = file_name.find('.');
    if (dotPos == string::npos || dotPos < 1) return "No";
    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if (!beforeDot.empty() && !isalpha(beforeDot[0])) return "No";
    vector<string> allowedExtensions = {"txt", "exe", "dll"};
    if (find(allowedExtensions.begin(), allowedExtensions.end(), afterDot) == allowedExtensions.end()) return "No";

    return "Yes";
}