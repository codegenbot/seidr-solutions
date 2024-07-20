string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if(a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for(string s : words){
        if(s.length() > max_word.length()){
            max_word = s;
        } else if(s.length() == max_word.length()){
            if(s < max_word) {
                max_word = s;
            }
        }
    }
    return max_word;
}