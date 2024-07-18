vector<string> select_words(string s, int n){
    vector<string> result;
    if(s.empty()) {
        return result;
    }
    int consonantCount = 0;
    string temp = "";
    for(char c : s) {
        if(c != ' '){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonantCount++;
            }
            temp += c;
        } else {
            if(consonantCount == n) {
                result.push_back(temp);
            }
            consonantCount = 0;
            temp = "";
        }
    }
    if(consonantCount == n) {
        result.push_back(temp);
    }
    return result;
}