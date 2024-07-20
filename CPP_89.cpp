for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char base = islower(s[i]) ? 'a' : 'A';
            s[i] = base + (s[i] - base + 2 * 2) % 26;
        }
    }
    return s;
}