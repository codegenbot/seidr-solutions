Here is the completed code:

string file_name_check(string file_name) {
    int count = 0;
    bool foundDot = false;
    for (char c : file_name) {
        if (isdigit(c)) {
            count++;
        } else if (c == '.') {
            foundDot = true;
        }
    }

    if (count > 3 || !foundDot) {
        return "No";
    }

    string beforeDot, afterDot;
    size_t pos = file_name.find('.');
    if (pos != string::npos) {
        beforeDot = file_name.substr(0, pos);
        afterDot = file_name.substr(pos + 1);
    } else {
        beforeDot = file_name;
        afterDot = "";
    }

    if (beforeDot.empty() || !isalpha(beforeDot[0])) {
        return "No";
    }

    vector<string> allowedExtensions = {"txt", "exe", "dll"};
    if (find(allowedExtensions.begin(), allowedExtensions.end(), afterDot) == allowedExtensions.end()) {
        return "No";
    }

    return "Yes";
}