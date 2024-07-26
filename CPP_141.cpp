int digitCount = 0;
    bool dotFound = false;
    string prefix = "";
    string suffix = "";

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            if (dotFound || prefix.empty()) {
                return "No";
            }
            dotFound = true;
        } else if (c == ' ') {
            return "No";
        } else if (!dotFound) {
            prefix += c;
        } else {
            suffix += c;
        }
    }

    if (digitCount > 3 || !dotFound || prefix.empty() || suffix.empty()) {
        return "No";
    }

    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }

    if ((prefix[0] < 'a' || prefix[0] > 'z') && (prefix[0] < 'A' || prefix[0] > 'Z')) {
        return "No";
    }

    return "Yes";
}