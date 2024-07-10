string get_closest_vowel(string word) {
    string result = "";
    for(int i = word.length() - 1; i > 0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            int left = i;
            while(left > 0 && (word[left] != 'a' && word[left] != 'e' && word[left] != 'i' && word[left] != 'o' && word[left] != 'u')) {
                left--;
            }
            if(left < i) {
                result = word.substr(left, i - left);
                break;
            }
        }
    }
    return result;
}