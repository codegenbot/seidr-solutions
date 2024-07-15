int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ("aeiouy".find(c) != string::npos && (c == 'y' || find(s.rbegin(), s.rend(), c) == s.rend())) {
            count++;
        }
    }
    return count;
}