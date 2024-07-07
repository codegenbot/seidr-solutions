Here is the completed code:

```cpp
vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else {
            if (!word.empty()) {
                bool has_n_consonants = count(word.begin(), word.end(), 'b') + 
                                         count(word.begin(), word.end(), 'c') + 
                                         count(word.begin(), word.end(), 'd') + 
                                         count(word.begin(), word.end(), 'f') + 
                                         count(word.begin(), word.end(), 'g') + 
                                         count(word.begin(), word.end(), 'h') + 
                                         count(word.begin(), word.end(), 'j') + 
                                         count(word.begin(), word.end(), 'k') + 
                                         count(word.begin(), word.end(), 'l') + 
                                         count(word.begin(), word.end(), 'm') + 
                                         count(word.begin(), word.end(), 'n') + 
                                         count(word.begin(), word.end(), 'p') + 
                                         count(word.begin(), word.end(), 'q') + 
                                         count(word.begin(), word.end(), 'r') + 
                                         count(word.begin(), word.end(), 's') + 
                                         count(word.begin(), word.end(), 't') + 
                                         count(word.begin(), word.end(), 'v') + 
                                         count(word.begin(), word.end(), 'w') + 
                                         count(word.begin(), word.end(), 'x') + 
                                         count(word.begin(), word.end(), 'y') = n;
                if (has_n_consonants) {
                    result.push_back(word);
                }
                word = "";
            }
        }
    }
    if (!word.empty()) {
        bool has_n_consonants = count(word.begin(), word.end(), 'b') + 
                                 count(word.begin(), word.end(), 'c') + 
                                 count(word.begin(), word.end(), 'd') + 
                                 count(word.begin(), word.end(), 'f') + 
                                 count(word.begin(), word.end(), 'g') + 
                                 count(word.begin(), word.end(), 'h') + 
                                 count(word.begin(), word.end(), 'j') + 
                                 count(word.begin(), word.end(), 'k') + 
                                 count(word.begin(), word.end(), 'l') + 
                                 count(word.begin(), word.end(), 'm') + 
                                 count(word.begin(), word.end(), 'n') + 
                                 count(word.begin(), word.end(), 'p') + 
                                 count(word.begin(), word.end(), 'q') + 
                                 count(word.begin(), word.end(), 'r') + 
                                 count(word.begin(), word.end(), 's') + 
                                 count(word.begin(), word.end(), 't') + 
                                 count(word.begin(), word.end(), 'v') + 
                                 count(word.begin(), word.end(), 'w') + 
                                 count(word.begin(), word.end(), 'x') + 
                                 count(word.begin(), word.end(), 'y') = n;
        if (has_n_consonants) {
            result.push_back(word);
        }
    }
    return result;
}