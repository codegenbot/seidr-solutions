int digitCount = 0;
    int dotCount = 0;
    string beforeDot = "";
    string afterDot = "";

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            dotCount++;
        } else if (dotCount == 0) {
            beforeDot += c;
        } else if (dotCount == 1) {
            afterDot += c;
        }
    }

    if (digitCount > 3 || dotCount != 1 || beforeDot.empty() || !isalpha(beforeDot[0]) ||
        (afterDot != "txt" && afterDot != "exe" && afterDot != "dll")) {
        return "No";
    }

    return "Yes";
}