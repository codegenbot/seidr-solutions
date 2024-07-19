int n = s.size();
    int i = 0, j = n - 1;
    while (i < j) {
        if (isalpha(s[i]) && isalpha(s[j])) {
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            s[j] = islower(s[j]) ? toupper(s[j]) : tolower(s[j]);
            i++;
            j--;
        } else if (!isalpha(s[i])) {
            i++;
        } else if (!isalpha(s[j])) {
            j--;
        }
    }
    if (i == j && isalpha(s[i])) {
        s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
    }
    if (i >= j) {
        reverse(s.begin(), s.end());
    }
    return s;
}