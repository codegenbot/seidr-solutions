int is_bored(string S){
    int count = 0;
    string word;
    for (char c : S) {
        if (c == '.' || c == '!' || c == '?') {
            if (word.length() > 0 && word[0] == 'I') {
                count++;
            }
            word = "";
        } else if (isalpha(c)) {
            word += c;
        }
    }
    return count;
}