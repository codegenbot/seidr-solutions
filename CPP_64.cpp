int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
            case 'y': // 'y' is a vowel only at the end of the word
                if (!s.size() || c != s.back()) {
                    break;
                }
                count++;
        }
    }
    return count;
}