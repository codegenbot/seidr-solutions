string solve(string s){
    int n = s.size();
    bool hasLetters = false;
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            hasLetters = true;
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        }
    }
    if (!hasLetters) {
        reverse(s.begin(), s.end());
    }
    return s;
}