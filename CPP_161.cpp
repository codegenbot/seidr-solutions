string result = s;
    int n = s.length();
    
    bool hasLetter = false;
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            hasLetter = true;
            result[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        }
    }

    if (!hasLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}