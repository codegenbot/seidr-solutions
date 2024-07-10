string find_max(vector<string> words){
    string max = *min_element(words.begin(), words.end());
    for(auto word : words) {
        int unique_chars = word.length();
        for(int i=0; i<word.length(); i++) {
            if(find(word.begin(), word.end(), word[i]) != word.end()) {
                unique_chars++;
            }
        }
        if(unique_chars > find_max_unique(max)) {
            max = word;
        } else if(unique_chars == find_max_unique(max) && max < word) {
            max = word;
        }
    }
    return max;
}

int find_max_unique(string s){
    int unique_chars = 0;
    for(int i=0; i<s.length(); i++) {
        if(find(s.begin(), s.end(), s[i]) == s.end()) {
            unique_chars++;
        } else {
            break;
        }
    }
    return unique_chars;
}