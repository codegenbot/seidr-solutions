int countDigits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool isValidFileName(const string& file_name) {
    int dotCount = 0;
    bool hasDot = false;
    for (char c : file_name) {
        if (c == '.') {
            dotCount++;
            hasDot = true;
        } else if (!hasDot && !isalpha(c)) {
            return false;
        }
    }
    if (dotCount != 1) {
        return false;
    }
    string ext = file_name.substr(file_name.find('.') + 1);
    vector<string> validExtensions = {"txt", "exe", "dll"};
    for (const string& extName : validExtensions) {
        if (ext == extName) {
            return true;
        }
    }
    return false;
}

string file_name_check(string file_name) {
    if (countDigits(file_name) > 3) {
        return "No";
    }
    if (!isValidFileName(file_name)) {
        return "No";
    }
    return "Yes";
}