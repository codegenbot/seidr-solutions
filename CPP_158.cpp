string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return unordered_map<char, bool>(a.begin(), a.end()).size() <
                   unordered_map<char, bool>(b.begin(), b.end()).size();
        });
    return result;
}