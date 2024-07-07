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
            case 'y':
                if (c == s.back()) {
                    count++;
                }
                break;
        }
    }
    return count;
}