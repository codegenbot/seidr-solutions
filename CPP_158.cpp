string find_max(vector<string> words){
    string max_str = *max_element(words.begin(), words.end(), 
                                  [](const string& s1, const string& s2){
                                      return (s1.size() < s2.size()) ||
                                             ((s1.size() == s2.size()) && (s1 < s2));
                                  });
    return max_str;
}