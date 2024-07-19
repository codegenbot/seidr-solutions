string find_max(vector<string> words){
    string maxWord = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    map<char, int> charCount;
    for (char c : maxWord) {
        charCount[c]++;
    }
    
    int maxUnique = 0;
    string result = "";
    for (const auto& pair : charCount) {
        if (pair.second == 1) {
            maxUnique++;
        }
    }
    
    for (string word : words) {
        map<char, int> charCountWord;
        for (char c : word) {
            charCountWord[c]++;
        }
        
        int unique = 0;
        for (const auto& pair : charCountWord) {
            if (pair.second == 1) {
                unique++;
            }
        }
        
        if (unique > maxUnique) {
            maxUnique = unique;
            result = word;
        } else if (unique == maxUnique && word < result) {
            result = word;
        }
    }
    
    return result;
}