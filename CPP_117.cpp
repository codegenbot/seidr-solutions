vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int count = 0;
    
    for (char c : s) {
        if (c != ' ') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count = 0;
                word = "";
            } else {
                count++;
            }
            word += c;
        } else {
            if (count == n) {
                result.push_back(word);
            }
            count = 0;
            word = "";
        }
    }
    
    if (count == n) {
        result.push_back(word);
    }
    
    return result;
}