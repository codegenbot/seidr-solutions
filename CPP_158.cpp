string find_max(vector<string> words){
    string max_str = *max_element(words.begin(), words.end(),
        [](const string& s1, const string& s2) {
            return count(s1.begin(), s1.end(), unique_copy(s1.begin(), s1.end())) <
                   count(s2.begin(), s2.end(), unique_copy(s2.begin(), s2.end()));
    });
    return max_str;
}