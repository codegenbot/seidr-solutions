string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > count(a.begin(), a.end(), unique_copy(a.begin(), a.end()));
        });
    return result;
}