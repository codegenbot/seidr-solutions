int is_bored(string S){
    int count = 0;
    string word;
    for(size_t i = 0; i < S.length(); ++i) {
        if(S[i] == '.' || S[i] == '?' || S[i] == '!') {
            if(i > 0 && S.substr(0, i).find("I") != string::npos)
                count++;
            word.clear();
        } else {
            word += S[i];
        }
    }
    return count;
}