int digitCount = 0;
    int dotCount = 0;
    string validExtensions[] = {"txt", "exe", "dll"};

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            dotCount++;
        }
    }

    if (digitCount > 3 || dotCount != 1) {
        return "No";
    }

    size_t dotPos = file_name.find('.');
    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if (beforeDot.empty() || !(beforeDot[0] >= 'a' && beforeDot[0] <= 'z') && !(beforeDot[0] >= 'A' && beforeDot[0] <= 'Z')) {
        return "No";
    }

    for (string ext : validExtensions) {
        if (afterDot == ext) {
            return "Yes";
        }
    }

    return "No";
}