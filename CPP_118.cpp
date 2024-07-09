string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isalpha(word[right])) continue;
        if (ispunct(word[right]) || isdigit(word[right])) continue;
        if (word[right] == 'Y' && word[right-1] != ' ') continue;
        while (left < right && !ispunct(word[left]) && !isdigit(word[left]) && 
               tolower(word[left]) != 'y') {
            ++left;
        }
        if (left + 1 < right) return tolower(word[left+1]);
    }
    return "";
}