string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; --i) {
        if(vowel(word[i])) {
            int left = i;
            while(left > 0 && !vowel(word[left-1]))
                left--;
            return (left == i ? "" : string(1, word[left-1]));
        }
    }
    return "";
}

bool vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}