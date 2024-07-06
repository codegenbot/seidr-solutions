string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!ispunct(word[i]) && !isalpha(word[i])) break;
        if (vowels.find(toupper(word[i])) != string::npos)
            return word.substr(left, i - left + 1);
        left = i + 1;
    }
    return "";
}