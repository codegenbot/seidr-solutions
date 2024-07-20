int is_bored(string S){
    int count = 0;
    string word;
    bool isI = false;
    for (char c : S) {
        if (c == ' ' || c == '.' || c == '?' || c == '!') {
            if (word == "I" && isI) {
                count++;
            }
            isI = (word == "I");
            word = "";
        } else {
            word += c;
        }
    }
    return count;
}