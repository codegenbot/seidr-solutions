string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i > 0; --i) {
        if(vowels.find(tolower(word[i])) != string::npos) {
            for(int j = i - 1; j >= 0; --j) {
                if(!vowels.find(tolower(word[j]))) break;
            }
            return word.substr(j+1, i-j-1);
        }
    }
    return "";
}

const string vowels = "aeiou";