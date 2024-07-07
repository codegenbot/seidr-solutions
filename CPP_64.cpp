int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
            case 'y': // consider 'y' as a vowel only if it's at the end
                if (s.size() == 1 || s[s.size() - 1] != 'y') continue;
                count++;
                break;
        }
    }
    return count;
}