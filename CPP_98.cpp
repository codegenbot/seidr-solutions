int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (std::isupper(s[i])) {
            count++;
        }
    }
    return count;
}