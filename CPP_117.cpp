std::vector<std::string> select_words(const std::string& s, int n) {
    std::vector<std::string> words;
    std::istringstream iss(s);
    std::string word;
    int count = 0;
    
    while (iss >> word) {
        if (++count != n) {
            words.push_back(word);
        }
    }
    
    return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}