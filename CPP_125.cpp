vector<string> result;
    string word = "";
    int count = 0;
    
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (result.empty()) {
        result.push_back(to_string(count));
    }
    
    return result;
}