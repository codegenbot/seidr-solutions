int count = 0;
    vector<int> freq(256, 0);
    
    for(char c : str){
        if(isalpha(c)){
            if(freq[toupper(c)] == 0){
                freq[toupper(c)] = 1;
                count++;
            }
        }
    }
    
    return count;
}