int is_bored(string S){
    int boredomCount = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.length() > 2 && sentence[0] == 'I') {
                boredomCount++;
            }
            sentence = "";
        } else {
            sentence += c;
        }
    }
    return boredomCount;
}