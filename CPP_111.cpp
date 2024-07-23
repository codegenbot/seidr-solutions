map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> counts;
    
    for(char c : test){
        if(c != ' '){
            counts[c]++;
        }
    }
    
    int maxCount = 0;
    for(auto it = counts.begin(); it != counts.end(); ++it){
        maxCount = max(maxCount, it->second);
    }
    
    for(auto it = counts.begin(); it != counts.end(); ++it){
        if(it->second == maxCount){
            result[it->first] = it->second;
        }
    }
    
    return result;
}