int vowels_count(string s) {
    int count = 0;
    const string vowels = "aeiouy";
    for (char c : s) {
        if (vowels.find(tolower(c)) != string::npos) {
            if (c == 'y' && &c != &s.back()) {
                continue;
            }
            count++;
        }
    }
    return count;
}