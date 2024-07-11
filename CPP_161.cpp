string solve(string s) {
    string result = "";
    bool foundLetter = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
            foundLetter = false;
        } else {
            if (!foundLetter) {
                foundLetter = true;
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        }
    }

    if (!foundLetter)
        reverse(result.begin(), result.end());

    return result;
}