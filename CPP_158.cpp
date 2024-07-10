string find_max(vector<string> words){
    string maxWord = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() != b.size()) return a.size() < b.size();
            return a > b;
        });
    return maxWord;
}