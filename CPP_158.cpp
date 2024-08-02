string find_max(vector<string> words) {
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return a.size() == b.size() ? a < b : a.size() > b.size();
        }).first;
    return result;
}