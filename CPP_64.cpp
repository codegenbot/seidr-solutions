int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ("aeiouy".find(c) != string::npos) {
            if (c == 'y' && s[s.length() - 1] == 'y') continue;
            count++;
        }
    }
    return count;
}