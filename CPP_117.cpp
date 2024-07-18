vector<string> select_words(string s, int n){
    vector<string> result;
    string word;
    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
                word += 'V'; 
            else
                word += 'C'; 
        } else {
            if (word.length() == n && count(word.begin(), word.end(), 'C') == n)
                result.push_back(word);
            word = "";
        }
    }
    if (word.length() == n && count(word.begin(), word.end(), 'C') == n)
        result.push_back(word);
    return result;
}