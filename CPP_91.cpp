int is_bored(string S){
    int boredomCount = 0;
    bool isStartOfSentence = true;

    for (int i = 0; i < S.length(); i++) {
        if (isStartOfSentence && S[i] == 'I') {
            boredomCount++;
        }

        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            isStartOfSentence = true;
        } else {
            isStartOfSentence = false;
        }
    }

    return boredomCount;
}