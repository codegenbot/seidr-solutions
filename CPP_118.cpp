string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; --i) {
        if(vowels.find(word[i]) != string::npos) {
            for(int j = i - 1; j >= 0; --j) {
                if(!vowels.find(word[j])) break;
                else if(j == 0) return word.substr(i);
            }
            return word.substr(i-1, 1);
        }
    }
    return "";
}

const string vowels("aeiouAEIOU");