vector<string> split_words(string txt){
    vector<string> words;
    string word;
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] == ' ' || txt[i] == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += txt[i];
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    if (words.empty()) {
        words.push_back(to_string(CountOddLowerLetters(txt)));
    }
    return words;
}

int CountOddLowerLetters(string txt) {
    int count = 0;
    for (int i = 0; i < txt.size(); i++) {
        if (islower(txt[i]) && (txt[i] - 'a') % 2 == 1) {
            count++;
        }
    }
    return count;
}