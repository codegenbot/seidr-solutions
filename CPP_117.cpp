vector<string> select_words(string s, int n) {
    vector<string> words;
    istringstream iss(s);
    string word;
    
    for (int i = 0; i < n && iss >> word; i++) {
        words.push_back(word);
    }
    
    return words;
}