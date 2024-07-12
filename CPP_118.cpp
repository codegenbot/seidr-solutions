string get_closest_vowel(string word) {
    int left = 0, right = word.length();
    while (left < right) {
        if (!isalpha(word[right - 1])) --right;
        else if (!isalpha(word[left])) ++left;
        else if (ispunct(word[right - 1]) || isdigit(word[right - 1])) --right;
        else if (ispunct(word[left]) || isdigit(word[left])) ++left;
        else {
            if (ispunct(word[right - 2]) && isalpha(word[right - 3])) --right;
            else if (ispunct(word[left + 1]) && isalpha(word[left])) ++left;
            else break;
        }
    }
    for (int i = left; i < right; ++i) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
            return word.substr(i, 1);
    }
    return "";
}