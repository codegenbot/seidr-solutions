string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            c = (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c - ('A' - 'a');
        }
        result += c;
    }

    return hasLetter ? result : string(result.rbegin(), result.rend());
}