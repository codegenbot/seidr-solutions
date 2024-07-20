string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = 0;
    for (int i = word.size() - 1; i >= 0; i--) {
        if (!ispunct(word[i]) && !isalpha(word[i])) continue;
        if (ispunct(word[i])) break;
        if (vowels.find(toupper(word[i])) != string::npos) {
            while (left < i && !ispunct(word[left]) && isalpha(word[left])) left++;
            return word.substr(left, i - left);
        }
    }
    return "";
}