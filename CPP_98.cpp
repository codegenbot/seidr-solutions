int count_upper(std::basic_string<char> s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'A' && s[i] <= 'U') || (s[i] >= 'a' && s[i] <= 'u')) {
            count++;
        }
    }
    return count;
}