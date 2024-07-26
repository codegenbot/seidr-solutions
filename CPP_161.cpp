string solve(string s){
    int n = s.size();
    int hasLetter = 0;
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            hasLetter = 1;
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}