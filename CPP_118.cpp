string get_closest_vowel(string word) {
    int n = word.length();
    for(int i=n-1; i>=0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            int left = i;
            while(left > 0 && (word[left-1] < 'a' || word[left-1] > 'z')) {
                left--;
            }
            if(left < n-1) {
                return word.substr(left, 1);
            }
        }
    }
    return "";
}