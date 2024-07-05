// Convert string to lowercase for case insensitive comparison
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || (s[i] == 'y' && i == n - 1)) {
            ++count;
        }
    }
    return count;
}