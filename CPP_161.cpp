string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            c = (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c + ('a' - 'A');
        }
        result += c;
    }

    return hasLetter ? result : string(result.rbegin(), result.rend());
}