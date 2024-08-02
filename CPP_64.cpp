int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            (s.find(c) != s.rfind(c))) {
            continue;
        }
        if (c == 'y' && s.find(c) == s.size() - 1) {
            count++;
        } else if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
                   (s.find(c) != s.rfind(c))) {
            continue;
        }
        count++;
    }
    return count;
}