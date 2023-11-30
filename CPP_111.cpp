map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    
    map<char, int> count;
    int maxCount = 0;
    
    for(char c : test){
        if(c != ' '){
            count[c]++;
            maxCount = max(maxCount, count[c]);
        }
    }
    
    for(auto it : count){
        if(it.second == maxCount){
            result[it.first] = it.second;
        }
    }
    
    return result;
}