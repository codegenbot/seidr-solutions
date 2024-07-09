string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>=0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u') {
            int left = i - 1;
            while(left >= 0 && !isVowel(word[left])) left--;
            if(left < n-2) return string(1, word[i]);
        }
    }
    return "";
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u' || c == 'A' || c == 'E' || 
            c == 'I' || c == 'O' || c == 'U');
}