int is_bored(string S){
    int boredom_count = 0;
    size_t start = 0;
    while (start < S.size()) {
        start = S.find(' ', start) + 1;
        if (start >= S.size() || S[start] == '.' || S[start] == '?' || S[start] == '!') {
            string sentence = S.substr(0, start);
            if (sentence.size() > 2 && S[0] == 'I' && toupper(sentence[1]) == ' ')
                boredom_count++;
            start += 1;
        }
    }
    return boredom_count;
}