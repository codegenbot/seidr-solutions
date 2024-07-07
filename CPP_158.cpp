string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (a.size() == b.size()) ?
                a < b : (int)a.size() > (int)b.size();
        });
    return result;
}