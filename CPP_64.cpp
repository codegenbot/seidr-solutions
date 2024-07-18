int count = 0;
    const string vowels = "aeiouy";
    for (char c : s) {
        if (vowels.find(tolower(c)) != string::npos) {
            if (c == 'y' && s.back() != c) {
                continue;
            }
            count++;
        }
    }
    return count;
}