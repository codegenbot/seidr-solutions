string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            result += toupper(islower(c)) ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }

    return hasLetter ? result : string(result.rbegin(), result.rend());
}