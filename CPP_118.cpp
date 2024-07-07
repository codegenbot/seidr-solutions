string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    
    while (left < right) {
        if (!isalpha(word[left])) left++;
        else if (!isalpha(word[right])) right--;
        else break;
    }
    
    for (int i = right; i > left; --i) {
        if (isvowel(word[i]))
            return word.substr(i, 1);
    }
    
    return "";
}