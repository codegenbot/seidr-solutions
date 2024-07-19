string anti_shuffle(string s){
    string newString = "";
    string word = "";
    
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            newString += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    
    sort(word.begin(), word.end());
    newString += word;
    
    return newString;
}