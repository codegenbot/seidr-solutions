transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<int> count(26, 0);
    for(char c : str){
        if(isalpha(c)){
            count[c - 'a']++;
        }
    }
    int distinct_chars = 0;
    for(int c : count){
        if(c > 0){
            distinct_chars++;
        }
    }
    return distinct_chars;
}