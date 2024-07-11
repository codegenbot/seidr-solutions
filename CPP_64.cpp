transform(s.begin(), s.end(), s.begin(), ::toupper);
    int count = 0;
    for (char c : s) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || (c == 'Y' && c == s.back())) {
            count++;
        }
    }
    return count;
}