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
                if (s.find('y') == s.length() - 1)
                    count++;
                break;
        }
    }
    return count;
}