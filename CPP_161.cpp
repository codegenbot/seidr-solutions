string solve(string s) {
    string result = "";
    bool foundLetter = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
            foundLetter = false;
        } else {
            if (foundLetter) {
                result += tolower(c);
            } else {
                result += toupper(c);
                foundLetter = true;
            }
        }
    }

    return result;
}