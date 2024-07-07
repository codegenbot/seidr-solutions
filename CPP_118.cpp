string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; i--) {
        if("AEIOUaeiou".find(word[i]) != string::npos) {
            int left = i;
            while(left > 0 && "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz".find(word[left-1]) == string::npos) {
                left--;
            }
            if(left < i) return word.substr(left, i-left);
        }
    }
    return "";
}