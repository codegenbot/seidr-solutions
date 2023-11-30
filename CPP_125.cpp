vector<string> split_words(string txt) {
    vector<string> result;
    string word;
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for (char c : txt) {
        if (c == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
            hasWhitespace = true;
        } else if (c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
            hasComma = true;
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (result.empty()) {
        if (hasWhitespace) {
            return split_words("3");
        } else if (hasComma) {
            return split_words("3");
        } else {
            result.push_back("3");
        }
    }
    
    return result;
}