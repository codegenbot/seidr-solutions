string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (isalpha(c)) {
            c = (c == toupper(c)) ? tolower(c) : toupper(c);
            hasLetter = true;
        }
        result += c;
    }

    if (!hasLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}