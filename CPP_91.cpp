int count = 0;
    int n = S.size();
    for (int i = 0; i < n; ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            count++;
        }
    }
    return count;
}