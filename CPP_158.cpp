string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
        [&](const string& s1, const string& s2) {
            if (s1.size() == s2.size())
                return s1 < s2;
            return s1.size() > s2.size();
        });
    for (string str : words) {
        set<char> uniqueChars(str.begin(), str.end());
        if (uniqueChars.size() > result.size()) {
            result = str;
        } else if (uniqueChars.size() == result.size()) {
            result = min(result, str);
        }
    }
    return result;
}