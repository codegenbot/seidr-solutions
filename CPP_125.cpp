vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    
    for (char c : txt) {
        if (isspace(c)) {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
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
    } else {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
                if (count % 2 != 0) {
                    result.push_back(to_string(count));
                    break;
                }
            }
        }
    }
    
    return result;
}