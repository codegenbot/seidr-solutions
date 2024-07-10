int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == tolower(s.back())) continue; // check if 'y' is at the end
                count++;
                break;
        }
    }
    return count;
}