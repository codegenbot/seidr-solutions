string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; i--) {
        if(vowels.find(word[i]) != string::npos) {
            for(int j = i - 1; j >= 0; j--) {
                if(!isvowel(word[j])) {
                    return (word.substr(j + 1, i - j - 1));
                }
            }
        }
    }
    return "";
}

const string vowels = "aeiouAEIOU";
bool isvowel(char c) {
    return vowels.find(c) != string::npos;
}