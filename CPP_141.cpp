int digitCount = 0;
    bool dotFound = false;
    bool letterFound = false;
    string extension;

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            if (dotFound || !letterFound) {
                return "No";
            }
            dotFound = true;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!dotFound) {
                letterFound = true;
            } else {
                extension += c;
            }
        } else {
            return "No";
        }
    }

    if (digitCount > 3 || !dotFound || extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }

    return "Yes";
}