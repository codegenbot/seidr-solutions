'''
vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        } else if (txt[i] == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
            hasComma = true;
        } else {
            word += txt[i];
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    } else if (!hasWhitespace && !hasComma) {
        words.push_back(to_string(3));
    }
    
    return words;
}
'''