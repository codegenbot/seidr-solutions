vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool containsWhitespace = false;
    bool containsComma = false;
    
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            result.push_back(word);
            word = "";
            containsWhitespace = true;
        }
        else if (txt[i] == ',') {
            result.push_back(word);
            word = "";
            containsComma = true;
        }
        else {
            word += txt[i];
        }
    }
    
    result.push_back(word);
    
    if (!containsWhitespace && !containsComma) {
        string count = to_string(count_odd_lowercase_letters(word));
        result.clear();
        result.push_back(count);
    }
    
    return result;
}

int count_odd_lowercase_letters(string word) {
    int count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            int index = word[i] - 'a';
            if (index % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}