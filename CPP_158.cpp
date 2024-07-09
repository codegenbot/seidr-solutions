string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(), 
        [](const std::string& a, const std::string& b) {
            return (a.length() == b.length()) ? a < b : a.length() > b.length();
    });
    return result;
}