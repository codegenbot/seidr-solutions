int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == 'y' && s[s.length() - 1] == 'y') {
                    continue;
                }
                count++;
                break;
        }
    }
    return count;
}