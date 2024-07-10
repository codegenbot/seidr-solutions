Here is the completed code:

string file_name_check(string file_name) {
    int digitCount = 0;
    bool hasDot = false;
    string prefix;

    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            hasDot = true;
        } else if (!hasDot) {
            prefix += c;
        }
    }

    if (digitCount > 3 || !prefix.size() || !isalpha(prefix[0])) {
        return "No";
    }
    if (!hasDot || file_name.find(".") == string::npos) {
        return "No";
    }
    string suffix = file_name.substr(file_name.find("."));
    if (suffix != ".txt" && suffix != ".exe" && suffix != ".dll") {
        return "No";
    }

    return "Yes";
}