string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for(int i = word.length() - 1; i >= 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for(int j = i-1; j >= 0; j--) {
                if (vowels.find(word[j]) == string::npos) break;
                else return word.substr(j, i-j);
            }
            return "";
        }
    }
    return "";
}