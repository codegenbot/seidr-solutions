string file_name_check(string file_name) {
    int digitCount = 0;
    bool foundDot = false;
    string beforeDot;

    for (int i = 0; i < file_name.size(); i++) {
        char c = file_name[i];
        if (c == '.') {
            foundDot = true;
        } else if (isdigit(c)) {
            digitCount++;
        } else if (!foundDot) {
            beforeDot += c;
        }
    }

    if (digitCount > 3 || !foundDot || beforeDot.empty() || !isalpha(beforeDot[0])) {
        return "No";
    }

    string afterDot = file_name.substr(foundDot ? foundDot + 1 : file_name.size());
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if (find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end()) {
        return "No";
    }

    return "Yes";
}