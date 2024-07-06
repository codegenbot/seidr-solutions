string file_name_check(string file_name) {
    int digitCount = 0;
    bool hasDot = false;
    string beforeDot;

    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
            if (digitCount > 3) return "No";
        } else if (c == '.') {
            hasDot = true;
        } else if (!hasDot) {
            beforeDot += c;
        }
    }

    if (!beforeDot.length() || !isalpha(beforeDot[0])) return "No";

    string afterDot = file_name.substr(file_name.find('.') + 1);
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if (find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end()) {
        return "No";
    }

    return "Yes";
}