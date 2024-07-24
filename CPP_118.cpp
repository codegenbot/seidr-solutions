string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) 
            return to_string(word[i]);
    }
    return "No punctuation or digit found";
}