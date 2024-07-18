int is_bored(string S){
    int count = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.length() > 2 && sentence[0] == 'I') {
                count++;
            }
            sentence = "";
        } else {
            sentence += c;
        }
    }
    return count;
}