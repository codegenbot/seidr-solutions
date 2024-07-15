int count_distinct_characters(string str){ 
    vector<int> count(26, 0);
    
    for(char c : str){
        if(isalpha(c)){
            count[tolower(c) - 'a']++;
        }
    }
    
    int distinct_chars = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] > 0){
            distinct_chars++;
        }
    }
    
    return distinct_chars;
}