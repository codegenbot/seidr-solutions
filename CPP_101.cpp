vector<string> splitString(string str) {
    vector<string> words;
    string word;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            if(!word.empty()) { 
                words.push_back(word);
                word.clear();
            }
        } else {
            word += str[i];
        }
    }
    if(!word.empty()) { 
        words.push_back(word);
    }
    return words;
}