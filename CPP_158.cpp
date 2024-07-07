string find_max(vector<string> words){
    string result = words[0];
    int maxUniqueChars = 0;
    
    for (const auto& word : words) {
        int uniqueChars = 0;
        set<char> s(word.begin(), word.end());
        
        if (s.size() > maxUniqueChars) {
            maxUniqueChars = s.size();
            result = word;
        } else if (s.size() == maxUniqueChars && word < result) {
            result = word;
        }
    }
    
    return result;
}