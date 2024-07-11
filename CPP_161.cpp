for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }

    bool hasLetters = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetters = true;
            break;
        }
    }

    if (!hasLetters) {
        reverse(s.begin(), s.end());
    }

    return s;
}