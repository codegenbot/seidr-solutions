map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> count;
    
    for(char c : test){
        if(c != ' '){
            count[c]++;
        }
    }
    
    int maxCount = 0;
    for(auto& p : count){
        maxCount = max(maxCount, p.second);
    }
    
    for(auto& p : count){
        if(p.second == maxCount){
            result[p.first] = p.second;
        }
    }
    
    return result;
}