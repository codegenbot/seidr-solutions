string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return unordered_map<char, int>(a.begin(), a.end()).size()
                < unordered_map<char, int>(b.begin(), b.end()).size();
        }).first;
    return result;
}