int is_bored(string S) {
    int boredomCount = 0;
    int sentenceStart = 0;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            string sentence = S.substr(sentenceStart, i - sentenceStart);
            
            if (sentence.length() > 0 && sentence[0] == 'I') {
                boredomCount++;
            }
            
            sentenceStart = i + 1;
        }
    }
    
    return boredomCount;
}