map<char, int> histogram(string test){
    map<char, int> result;
    stringstream ss(test);
    string word;
    
    while(ss >> word){
        for(char c : word){
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for(const auto &entry : result){
        if(entry.second > maxCount){
            maxCount = entry.second;
        }
    }
    
    map<char, int> res;
    for(const auto &entry : result){
        if(entry.second == maxCount){
            res[entry.first] = entry.second;
        }
    }
    
    return res;
}