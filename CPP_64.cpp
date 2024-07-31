int vowels_count(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    bool y_vowel = (s.back() == 'y');
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    if (y_vowel) {
        count--;
    }
    return count;
}