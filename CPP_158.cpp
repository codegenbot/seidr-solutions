string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            return (a.size() == b.size()) ? a < b : a.size() < b.size();
        });
    for(string word : words){
        if(word.size() > max_word.size()){
            max_word = word;
        }
        else if(word.size() == max_word.size()){
            int unique_chars_a = 0, unique_chars_b = 0;
            set<char> s1(word.begin(), word.end());
            set<char> s2(max_word.begin(), max_word.end());
            for(char c : s1) unique_chars_a++;
            for(char c : s2) unique_chars_b++;
            if(unique_chars_a > unique_chars_b){
                max_word = word;
            }
        }
    }
    return max_word;
}