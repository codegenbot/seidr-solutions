string solve(string s) {
    string result = "";
    bool foundLetter = false;

    for (char c : s) {
        if (isalpha(c)) {
            foundLetter = true;
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }

    if (!foundLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}