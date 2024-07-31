std::vector<std::string> select_words(const std::string& s, int n) {
    std::istringstream iss(s);
    std::vector<std::string> words;
    std::string word;
    
    while(iss >> word) {
        words.push_back(word);
    }
    
    std::vector<std::string> selected_words;
    for(size_t i = 0; i < words.size(); i++) {
        if((i + 1) % n != 0) {
            selected_words.push_back(words[i]);
        }
    }
    
    return selected_words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}