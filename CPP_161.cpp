string solve(string s) {
    string result = "";
    bool hasLetters = false;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            hasLetters = true;
            result += (s[i] >= 'a' && s[i] <= 'z') ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }

    return hasLetters ? result : string(result.rbegin(), result.rend());
}