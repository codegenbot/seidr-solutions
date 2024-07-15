vector<string> words;
    if(s.empty()) {
        return words;
    }
    string word = "";
    int consonant_count = 0;
    for(char c : s) {
        if(c != ' ') {
            if(tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            word += c;
        } else {
            if(consonant_count == n) {
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        }
    }
    if(consonant_count == n) {
        words.push_back(word);
    }
    return words;
}