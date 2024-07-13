string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i > 0; --i) {
        if(!isalpha(word[i])) continue;
        if(vowlower(word[i]) || voupper(word[i])) {
            int left = i - 1;
            while(left >= 0 && !isalpha(word[left])) --left;
            if(left < 0 || isalpha(word[left]))
                return string(1, toupper(word[i]));
            break;
        }
    }
    return "";
}