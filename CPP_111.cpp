map<char, int> histogram(string test){
    map<char, int> freq;
    for(char c : test){
        if(c != ' '){
            freq[c]++;
        }
    }
    
    int maxCount = 0;
    for(auto& p : freq){
        maxCount = max(maxCount, p.second);
    }
    
    map<char, int> result;
    for(auto& p : freq){
        if(p.second == maxCount){
            result[p.first] = p.second;
        }
    }
    
    return result;
}