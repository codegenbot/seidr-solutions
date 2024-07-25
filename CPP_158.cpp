string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
        [](const string& s1, const string& s2) {
            return (s1.length() < s2.length()) ||
                  ((s1.length() == s2.length()) && s1 < s2);
        });
    
    map<char, int> char_count;
    for (char c : max_word) {
        if (char_count.find(c) == char_count.end())
            char_count[c] = 1;
        else
            char_count[c]++;
    }
    
    string result;
    for (auto& p : char_count)
        if (p.second > 0)
            result += p.first;
    
    return max_word;
}