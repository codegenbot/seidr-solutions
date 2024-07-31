int count = 0;
    char prev = ' ';
    for (char c : s) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u' || (tolower(c) == 'y' && prev == ' ')) {
            count++;
        }
        prev = c;
    }
    return count;
}