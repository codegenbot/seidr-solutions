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
                if (s.back() == c) // check if the character is at the end of the string
                    count++;
                break;
        }
    }
    return count;
}