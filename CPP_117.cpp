vector<string> select_words(string s, int n) {
    vector<string> words;
    string current_word;
    
    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                current_word.clear();
            } else {
                current_word.push_back(c);
            }
        } else if (!current_word.empty()) {
            if (count_if(current_word.begin(), current_word.end(), [](char c){ return isalpha(c); }) == n) {
                words.push_back(current_word);
            }
            current_word.clear();
        }
    }
    
    if (!current_word.empty() && count_if(current_word.begin(), current_word.end(), [](char c){ return isalpha(c); }) == n) {
        words.push_back(current_word);
    }
    
    return words;
}