int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'y' && i == s.size() - 1) {
            count++;
            break;
        }
    }
    return count;
}