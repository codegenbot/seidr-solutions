vector<string> result;
    string word = "";
    int oddCount = 0;
    
    for (char c : txt) {
        if (c == ' ') {
            result.push_back(word);
            word = "";
        } else if (c == ',') {
            result.push_back(word);
            word = "";
        } else {
            word += c;
            if (islower(c) && ((c - 'a') % 2 == 1)) {
                oddCount++;
            }
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (result.size() == 1 && isdigit(result[0][0])) {
        result[0] = to_string(oddCount);
    }
    
    return result;
}