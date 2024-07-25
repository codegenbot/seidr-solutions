int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == 'y' && !s.substr(0, s.size() - 1).find('h') &&
                    !s.substr(0, s.size() - 1).find('w')) {
                    count++;
                } else
                    count++;
        }
    }
    return count;
}