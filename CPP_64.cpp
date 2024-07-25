int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            !(s.size() == 1 && c == 'y')) {
            count++;
        }
    }
    return count;
}