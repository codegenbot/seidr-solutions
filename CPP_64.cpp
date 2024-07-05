int vowels_count(string s){
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || (s[i] == 'y' && i == s.length() - 1)) {
            count++;
        }
    }
    return count;
}