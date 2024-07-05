int vowels_count(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    string vowels = "aeiou";
    for (int i = 0; i < s.length(); ++i) {
        if (vowels.find(s[i]) != string::npos || (s[i] == 'y' && i == s.length() - 1)) {
            count++;
        }
    }
    return count;
}