int digitCount = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    size_t dotPos = file_name.find('.');
    if (digitCount > 3 || dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }
    string extension = file_name.substr(dotPos + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    return "Yes";
}