string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i >= 0; i--) {
        if(vowels.find(word[i]) != string::npos) {
            for(int j = i - 1; j >= 0; j--) {
                if(!vowels.find(word[j])) break;
                else if(j == 0) return string(1, word[i]);
            }
            return string(1, word[i]);
        }
    }
    return "";
}

const string vowels = "aeiouAEIOU";