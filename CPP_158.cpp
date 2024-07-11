string find_max(vector<string> words){
    string maxWord = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    
    for (int i = 0; i < maxWord.length(); ++i) {
        bool found = false;
        for (int j = 0; j < words.size(); ++j) {
            if (words[j].find(maxWord[i]) != string::npos) {
                found = true;
                break;
            }
        }
        if (!found) return maxWord.substr(0, i);
    }
    
    return maxWord;
}