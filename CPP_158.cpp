string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
        [&words](const string& a, const string& b) {
            if (a.size() != b.size()) return a.size() < b.size();
            return count(a.begin(), a.end(), [](char c){return isalpha(c);}) <
                count(b.begin(), b.end(), [](char c){return isalpha(c);});
        });
    return result;
}