vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (char c : txt) {
        if (c == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        }
        else if (c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
            hasComma = true;
        }
        else {
            word += c;
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (!hasWhitespace && !hasComma) {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}