string find_max(vector<string> words) {
    string max = *max_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (string word : words) {
        if (word.size() >= max.size() && unique(word.begin(), word.end()).size() >= unique(max.begin(), max.end()).size()) {
            max = word;
        }
    }
    return max;
}