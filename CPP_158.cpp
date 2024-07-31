string find_max(vector<string> words){
    string max_str = *max_element(words.begin(), words.end(),
        [](const string &s1, const string &s2) {
            auto set1 = set<char>(s1.begin(), s1.end());
            auto set2 = set<char>(s2.begin(), s2.end());
            return set1.size() < set2.size();
        });
    return max_str;
}