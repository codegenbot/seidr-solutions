string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = 0;
    for (int right = word.size() - 1; right >= 0 && !isVowel(word[right]); --right) {
        ++left;
    }
    for (; right < word.size(); ++right, ++left) {
        if (isVowel(word[right])) {
            return string(1, word[right]);
        }
    }
    return "";

}

bool isVowel(char c) {
    string vowels = "aeiouAEIOU";
    return std::find(vowels.begin(), vowels.end(), c) != vowels.end();
}