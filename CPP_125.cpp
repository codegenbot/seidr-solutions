std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    std::string word = "";

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    
    if (word != "") {
        result.push_back(word);
    }
    
    return result;
}