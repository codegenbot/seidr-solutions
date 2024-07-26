string anti_shuffle(string s){
    string result = "";
    string current_word = "";
    
    for (char c : s) {
        if (c == ' ') {
            sort(current_word.begin(), current_word.end());
            result += current_word + " ";
            current_word = "";
        } else {
            current_word += c;
        }
    }
    
    sort(current_word.begin(), current_word.end());
    result += current_word;
    
    return result;
}