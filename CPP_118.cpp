string get_closest_vowel(string word) {
    string::reverse_iterator it = word.rbegin();
    bool found = false;
    while (it != word.rend()) {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' ||
            *it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U') {
            found = true;
            break;
        }
        it++;
    }
    if (!found) return "";
    while (it != word.rend() && !ispunct(*it)) {
        it++;
    }
    if (it == word.rend()) return "";
    string::reverse_iterator prevIt = it;
    it--;
    while (it != word.rend() && !ispunct(*it)) {
        it--;
    }
    if (it == word.rend()) return "";
    while (it != prevIt) {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' ||
            *it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U') {
            return string(1, *it);
        }
        it++;
    }
    return "";
}