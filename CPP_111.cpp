map<char,int> histogram(string test){
    map<char,int> counts;
    
    for(char letter : test){
        if(letter != ' '){
            counts[letter]++;
        }
    }
    
    int maxCount = 0;
    for(auto it : counts){
        if(it.second > maxCount){
            maxCount = it.second;
        }
    }
    
    map<char,int> result;
    for(auto it : counts){
        if(it.second == maxCount){
            result[it.first] = it.second;
        }
    }
    
    return result;
}