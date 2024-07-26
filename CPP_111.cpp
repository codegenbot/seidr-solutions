map<char, int> histogram(string test){
    map<char, int> counts;
    int maxCount = 0;
    
    for(char c : test){
        if(c != ' '){
            counts[c]++;
            maxCount = max(maxCount, counts[c]);
        }
    }
    
    map<char, int> result;
    for(auto it = counts.begin(); it != counts.end(); ++it){
        if(it->second == maxCount){
            result[it->first] = it->second;
        }
    }
    
    return result;
}