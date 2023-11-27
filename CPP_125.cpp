vector<string> split_words(string txt) {
    vector<string> words;
    int oddCount = 0;
    string word = "";
    
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
            if (islower(c) && ((c - 'a') % 2 == 1)) {
                oddCount++;
            }
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    if (words.empty()) {
        words.push_back(to_string(oddCount));
    }
    
    return words;
}