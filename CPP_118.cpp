string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < word.length(); i++) {
        if (!isalpha(word[i])) continue;
        int left = i + 1;
        while (left < word.length() && !ispunct(word[left]) && !ispunct(word[left-1]))
            if (vowels.find(toupper(word[left++])) != string::npos) return toupper(word[--left]);
    }
    return "";
}