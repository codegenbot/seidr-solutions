string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return std::tie(a.size(), count(a.begin(), a.end, ' ')) <
                   std::tie(b.size(), count(b.begin(), b.end, ' '));
        });
    return res;
}