int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ("aeiouy".find(toupper(c)) != string::npos) {
            if (c == 'y' && s.find('y') == s.length() - 1) continue;
            count++;
        }
    }
    return count;
}