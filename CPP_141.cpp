int digitCount = 0;
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
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

    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if (!isalpha(beforeDot[0])) {
        return "No";
    }

    if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }

    return "Yes";
}