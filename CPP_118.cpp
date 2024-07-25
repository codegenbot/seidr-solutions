string get_closest_vowel(string word){
    for(int i = word.size() - 1; i > 0; --i) {
        if("AEIOUaeiou".find(word[i]) != string::npos) {
            for(int j = i - 1; j >= 0; --j) {
                if("AEIOUaeiou".find(word[j]) == string::npos)
                    return (char)word[i];
            }
        }
    }
    return "";
}