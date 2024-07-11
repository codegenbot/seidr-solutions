Here is the completed code:

string file_name_check(string file_name) {
    int digitCount = 0;
    bool foundDot = false;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            foundDot = true;
        } else if (!foundDot && !isalpha(c)) {
            return "No";
        }
    }
    if (digitCount > 3 || !foundDot) {
        return "No";
    }
    size_t dotPos = file_name.find('.');
    string ext = file_name.substr(dotPos + 1);
    vector<string> validExts = {"txt", "exe", "dll"};
    if (find(validExts.begin(), validExts.end(), ext) == validExts.end()) {
        return "No";
    }
    return "Yes";
}