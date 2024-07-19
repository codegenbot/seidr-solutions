string anti_shuffle(string s){
    string result = "";
    string word = "";
    
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        }
    }
    
    if (!word.empty()) {
        sort(word.begin(), word.end());
        result += word;
    }
    
    return result;
}