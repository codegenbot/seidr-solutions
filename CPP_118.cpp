string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i > 0; --i) {
        if(("aeiouAEIOU").find(word[i]) != string::npos) {
            int left = i - 1;
            while(left > 0 && !("aeiouAEIOU").find(word[left])) {
                --left;
            }
            return word.substr(left + 1, i - left - 1);
        }
    }
    return "";
}