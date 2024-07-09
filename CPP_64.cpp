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
            case 'y':
                if (!s.empty() && isalpha(s.back()) && tolower(s.back()) == 'y') {
                    count++;
                }
                break;
        }
    }
    return count;
}