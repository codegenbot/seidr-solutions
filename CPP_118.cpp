string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            string s = word.substr(i + 1);
            for (int j = 0; j < s.size(); ++j) {
                char cc = tolower(s[j]);
                if (!isalpha(cc)) break;
                if (cc == 'a' || cc == 'e' || cc == 'i' || cc == 'o' || cc == 'u') continue;
                return string(1, c);
            }
        }
    }
    return "";
}