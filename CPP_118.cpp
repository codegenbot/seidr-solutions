string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i >= 0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u') {
            int left = i + 1;
            while(left < word.size() && isalpha(word[left])) {
                if(!isvowel(word[left])) {
                    break;
                }
                left++;
            }
            if(left > i) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}