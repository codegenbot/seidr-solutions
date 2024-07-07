string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
        [&words](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]);
            }
            return a.size() < b.size();
    });
    return result;
}