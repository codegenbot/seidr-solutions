vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for (char c : txt) {
        if (isspace(c)) {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            hasComma = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (!hasWhitespace && !hasComma) {
        result.clear();
        result.push_back(to_string(countOddLetters(txt)));
    }
    
    return result;
}

int countOddLetters(string txt) {
    int count = 0;
    for (char c : txt) {
        if (islower(c)) {
            int letterOrder = c - 'a';
            if (letterOrder % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}