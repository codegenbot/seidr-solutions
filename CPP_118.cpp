string get_closest_vowel(string word) {
    int right = word.size() - 1;
    while (right > 0 && !isVowel(word[right])) {
        right--;
    }
    
    if (right == 0) return "";
    
    int left = right - 1;
    while (!isVowel(word[left]) || left == 0) {
        left--;
    }
    
    return word.substr(left + 1, right - left - 1);
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}