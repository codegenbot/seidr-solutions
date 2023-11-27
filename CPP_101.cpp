vector<string> words_string(string s){
    vector<string> result;
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != ',') {
            word += s[i];
        } else if (!word.empty()) {
            result.push_back(word);
            word = "";
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}