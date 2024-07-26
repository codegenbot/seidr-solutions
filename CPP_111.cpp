map<char,int> histogram(string test){
    map<char,int> result;
    map<char,int> count;
    
    for(char c : test){
        if(c != ' '){
            count[c]++;
        }
    }
    
    int maxCount = 0;
    for(const auto &entry : count){
        maxCount = max(maxCount, entry.second);
    }
    
    for(const auto &entry : count){
        if(entry.second == maxCount){
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}