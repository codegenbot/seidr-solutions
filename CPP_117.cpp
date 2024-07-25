vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    
    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                word += c;
            } else {
                word += c;
                if (count_if(word.begin(), word.end(), [](char x) { return isalpha(x) && tolower(x) != 'a' && tolower(x) != 'e' && tolower(x) != 'i' && tolower(x) != 'o' && tolower(x) != 'u'; }) == n) {
                    words.push_back(word);
                }
                word = "";
            }
        } else if (!word.empty()) {
            if (count_if(word.begin(), word.end(), [](char x) { return isalpha(x) && tolower(x) != 'a' && tolower(x) != 'e' && tolower(x) != 'i' && tolower(x) != 'o' && tolower(x) != 'u'; }) == n) {
                words.push_back(word);
            }
            word = "";
        }
    }
    
    if (!word.empty() && count_if(word.begin(), word.end(), [](char x) { return isalpha(x) && tolower(x) != 'a' && tolower(x) != 'e' && tolower(x) != 'i' && tolower(x) != 'o' && tolower(x) != 'u'; }) == n) {
        words.push_back(word);
    }
    
    return words;
}