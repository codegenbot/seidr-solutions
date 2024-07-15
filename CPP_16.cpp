transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> char_set(256, false);
    int count = 0;
    
    for(char c : str){
        if(!char_set[c]){
            char_set[c] = true;
            count++;
        }
    }
    
    return count;
}