transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<int> count(26);
    int distinctCount = 0;
    for(char c : str){
        if(isalpha(c)){
            if(count[c - 'a'] == 0){
                count[c - 'a'] = 1;
                distinctCount++;
            }
        }
    }
    return distinctCount;
}