string solve(string s){
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j) {
        if (isalpha(s[i]) && isalpha(s[j])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
            if (islower(s[j])) {
                s[j] = toupper(s[j]);
            } else {
                s[j] = tolower(s[j]);
            }
        }
        i++;
        j--;
    }
    if (i == j && isalpha(s[i])) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    if (i >= j) {
        reverse(s.begin(), s.end());
    }
    return s;
}