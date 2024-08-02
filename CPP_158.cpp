```
std::string find_max(vector<std::string> words){
    std::string result = *min_element(words.begin(), words.end(),
        [](const std::string &a, const std::string &b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (auto& word : words) {
        int unique_chars = 0;
        std::set<char> s(word.begin(), word.end());
        unique_chars = s.size();
        if(unique_chars > result.length()){
            result = word;
        }
    }
    return result;
}