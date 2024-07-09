int count_upper(const std::string& s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = toupper(s[i]);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}