Here is the completed code:

string file_name_check(string file_name) {
    int digitCount = 0;
    bool hasDot = false;
    string beforeDot;

    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            hasDot = true;
        } else if (!hasDot) {
            beforeDot += c;
        }
    }

    return (digitCount <= 3 && hasDot && !beforeDot.empty() && (beforeDot[0] >= 'a' && beforeDot[0] <= 'z') || (beforeDot[0] >= 'A' && beforeDot[0] <= 'Z')) &&
           (hasDot ? file_name.find('.') + 1 < file_name.size() : true) &&
           (file_name.find('.') == string::npos ?
            (file_name.substr(file_name.find_last_of('.') + 1).compare("txt") == 0 ||
             file_name.substr(file_name.find_last_of('.') + 1).compare("exe") == 0 ||
             file_name.substr(file_name.find_last_of('.') + 1).compare("dll") == 0) :
            false)
        ? "Yes" : "No";
}