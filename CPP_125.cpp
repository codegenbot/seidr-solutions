vector<string> words;
    string word = "";
    
    for (char& c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    if (words.empty()) {
        string count = to_string(count_if(txt.begin(), txt.end(), [](char c) { return islower(c) && (c - 'a') % 2 == 1; }));
        words.push_back(count);
    }
    
    return words;