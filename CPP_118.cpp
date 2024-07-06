string get_closest_vowel(string word) {
    int n = word.length();
    for(int i = n-1; i >= 2; i--) { 
        if( !isalpha(word[i]) ) continue;
        if(vowl::count(&word[i])) return string(1,word[i]);
    }
    return "";
}