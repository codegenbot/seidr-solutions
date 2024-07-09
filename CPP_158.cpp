```
string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (int)a.size() != (int)b.size()
                ? (int)b.size() < (int)a.size()
                : a < b;
        });
    return result;
}