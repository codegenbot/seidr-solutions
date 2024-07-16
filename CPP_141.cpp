int digitCount = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        }
    }

    if (digitCount > 3) {
        return "No";
    }

    size_t dotPos = file_name.find('.');
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }

    string prefix = file_name.substr(0, dotPos);
    string suffix = file_name.substr(dotPos + 1);

    if (!isalpha(prefix[0])) {
        return "No";
    }

    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }

    return "Yes";
}