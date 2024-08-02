string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i > 0; --i) {
        if(vowels.find(word[i]) != string::npos) {
            int left = i;
            while(left > 0 && !vowels.find(word[left-1])) {
                --left;
            }
            return word.substr(left, i - left);
        }
    }
    return "";
}

const string vowels = "aeiouAEIOU";