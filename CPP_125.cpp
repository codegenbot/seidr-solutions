vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else {
            word += c;
        }
    }
    
    if (word != "") {
        result.push_back(word);
    }
    
    if (!hasWhitespace && result.size() == 1) {
        int oddLowerCaseLetters = 0;
        for (char c : result[0]) {
            if (islower(c)) {
                int letterIndex = c - 'a';
                if (letterIndex % 2 == 1) {
                    oddLowerCaseLetters++;
                }
            }
        }
        result[0] = to_string(oddLowerCaseLetters);
    }
    
    return result;
}