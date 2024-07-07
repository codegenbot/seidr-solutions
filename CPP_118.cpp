string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; --i) {
        if("aeiouAEIOU".find(word[i]) != string::npos) {
            int left = i;
            while(left > 0 && "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ".find(word[left-1]) == string::npos)
                --left;
            if(i - left < word.size() - left + 1)
                return &word[i];
        }
    }
    return "";
}