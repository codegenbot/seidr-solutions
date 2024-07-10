int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == 'y' && s.length() - 1 == find(s.begin(), s.end(), c) - s.begin())
                    break;
                count++;
                break;
        }
    }
    return count;
}