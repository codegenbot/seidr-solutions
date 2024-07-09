string get_closest_vowel(string word){
    int n = word.size();
    for(int i=n-1; i>=0; --i) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U') {
            int j = i - 1;
            while(j >= 0 && (word[j] == 'a' || word[j] == 'e' || 
                             word[j] == 'i' || word[j] == 'o' || 
                             word[j] == 'u' || word[j] == 'A' || 
                             word[j] == 'E' || word[j] == 'I' || 
                             word[j] == 'O' || word[j] == 'U')) {
                --j;
            }
            if(j < 0) {
                return string(1,word[i]);
            } else {
                int k = i + 1;
                while(k < n && (word[k] == 'a' || word[k] == 'e' || 
                                 word[k] == 'i' || word[k] == 'o' || 
                                 word[k] == 'u' || word[k] == 'A' || 
                                 word[k] == 'E' || word[k] == 'I' || 
                                 word[k] == 'O' || word[k] == 'U')) {
                    ++k;
                }
                if(k == n) {
                    return string(1,word[i]);
                } else {
                    int left = j + 1;
                    int right = k - 1;
                    if(abs(i-left) <= abs(i-right)) {
                        return string(1,word[i]);
                    } else {
                        return string(1,word[k-1]);
                    }
                }
            }
        }
    }
    return "";
}