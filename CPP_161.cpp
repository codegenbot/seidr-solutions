string solve(string s){
    int n = s.length();
    int i = 0, j = n - 1;
    while (i < j) {
        if (isalpha(s[i]) && isalpha(s[j])) {
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            s[j] = islower(s[j]) ? toupper(s[j]) : tolower(s[j]);
        }
        else if (isalpha(s[i])) {
            s[j] = s[i];
        }
        else if (isalpha(s[j])) {
            s[i] = s[j];
        }
        i++;
        j--;
    }
    if (i == j && isalpha(s[i])) {
        s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
    }
    else if (i > j) {
        reverse(s.begin(), s.end());
    }
    return s;
}