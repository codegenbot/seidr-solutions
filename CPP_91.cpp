int is_bored(string S) {
    int count = 0;
    char prev = ' ';

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (prev == ' ' || prev == '.' || prev == '?' || prev == '!')) {
            count++;
        }
        prev = S[i];
    }

    return count;
}