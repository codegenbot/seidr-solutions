int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) {
            count++;
        }
    }
    if (s.size() > 0 && (s.back() == 'y')) {
        count++;
    }
    return count;
}