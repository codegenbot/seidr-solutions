string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > std::count(b.begin(), b.end(), a[0]);
        });
    return result;
}