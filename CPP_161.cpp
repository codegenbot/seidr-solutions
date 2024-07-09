string solve(string s) {
    string result = "";
    bool has_letter = false;

    for (char c : s) {
        if (isalpha(c)) {
            has_letter = true;
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }

    return has_letter ? result : string(result.rbegin(), result.rend());
}