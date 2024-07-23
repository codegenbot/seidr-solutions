int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && !is_last_char(s))) {
            count++;
        }
    }
    return count;
}

bool is_last_char(std::string s) {
    return s.back() == s[s.size()-1];
}