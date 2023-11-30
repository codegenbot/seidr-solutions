int is_bored(string S){
    int boredomCount = 0;
    string sentence;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            if (sentence.length() > 0 && sentence[0] == 'I') {
                boredomCount++;
            }
            sentence = "";
        } else {
            sentence += S[i];
        }
    }
    return boredomCount;
}