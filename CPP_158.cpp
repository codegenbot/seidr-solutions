string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [&](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > count(a.begin(), a.end(), unique_copy(a.begin(), a.end()));
        });
    return result;
}