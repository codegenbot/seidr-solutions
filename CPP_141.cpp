int countDigits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    if (countDigits(file_name) > 3) {
        return "No";
    }

    size_t dotPos = file_name.find('.');
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }

    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if (!all_of(beforeDot.begin(), beforeDot.end(), ::isalpha)) {
        return "No";
    }

    vector<string> allowedExtensions = {"txt", "exe", "dll"};
    if (find(allowedExtensions.begin(), allowedExtensions.end(), afterDot) == allowedExtensions.end()) {
        return "No";
    }

    return "Yes";
}