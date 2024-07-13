string get_closest_vowel(string word) {
    string::reverse_iterator rit = word.rbegin();
    for (rit; *rit != ' '; rit++) {
        if (*rit == 'a' || *rit == 'e' || *rit == 'i' || *rit == 'o' || *rit == 'u' || *rit == 'A' || *rit == 'E' || *rit == 'I' || *rit == 'O' || *rit == 'U') {
            return string(1, *rit);
        }
    }
    return "";
}