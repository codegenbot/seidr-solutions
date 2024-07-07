string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
            [](const string &a, const string &b) {
                return a.size() < b.size();
            });
    for (int i = 0; i < words.size(); ++i) {
        if (words[i].size() > result.size()) {
            result = words[i];
        } else if (words[i].size() == result.size()) {
            result = min(result, words[i]);
        }
    }
    return result;
}