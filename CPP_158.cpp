string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for(string word : words) {
        if(word.size() >= result.size()) {
            set<char> s1(word.begin(), word.end());
            set<char> s2(result.begin(), result.end());
            if(s1.size() > s2.size()) {
                result = word;
            }
        }
    }
    return result;
}