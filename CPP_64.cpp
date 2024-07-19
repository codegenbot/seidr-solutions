transform(s.begin(), s.end(), s.begin(), ::toupper);
    int count = 0;
    char lastChar = s.back();
    for (char c : s) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || (c == 'Y' && c == lastChar)) {
            count++;
        }
    }
    return count;
}