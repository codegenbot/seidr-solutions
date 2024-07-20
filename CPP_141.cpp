Here is the completed code:

string file_name_check(string file_name) {
    int digitCount = 0;
    bool foundDot = false;

    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
            if (digitCount > 3)
                return "No";
        } else if (c == '.') {
            foundDot = true;
        }
    }

    if (!foundDot || file_name.find('.') == string::npos)
        return "No";

    string beforeDot = file_name.substr(0, file_name.find('.'));
    string afterDot = file_name.substr(file_name.find('.') + 1);

    if (beforeDot.empty() || !isalpha(beforeDot[0]))
        return "No";
    if (!(afterDot == "txt" || afterDot == "exe" || afterDot == "dll"))
        return "No";

    return "Yes";
}