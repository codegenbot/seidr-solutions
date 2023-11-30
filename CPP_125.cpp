vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] == ' ' || txt[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    if (words.empty()) {
        words.push_back(to_string(26));
    }
    return words;
}