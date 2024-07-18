map<char,int> histogram(string test){
    map<char,int> result;
    map<char,int> frequency;
    
    for(char c : test){
        if(c != ' '){
            frequency[c]++;
        }
    }
    
    int maxFreq = 0;
    for(auto it : frequency){
        maxFreq = max(maxFreq, it.second);
    }
    
    for(auto it : frequency){
        if(it.second == maxFreq){
            result[it.first] = it.second;
        }
    }
    
    return result;
}