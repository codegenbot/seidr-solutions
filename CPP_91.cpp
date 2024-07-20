int is_bored(string S){
    int count = 0;
    string word;
    bool is_i = false;
    
    for (char& c : S) {
        if (isalpha(c)) {
            word += c;
        } else if (word == "I" && (c == '.' || c == '!' || c == '?')) {
            count++;
        }
        if (c == ' ') {
            word = "";
        }
    }
    
    return count;
}