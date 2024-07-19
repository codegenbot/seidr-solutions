map<char,int> histogram(string test){
    map<char,int> result;
    istringstream iss(test);
    string token;
    while(getline(iss, token, ' ')){
        for(char c : token){
            result[c]++;
        }
    }
    int maxCount = 0;
    for(const auto& entry : result){
        maxCount = max(maxCount, entry.second);
    }
    map<char,int> maxCountChars;
    for(const auto& entry : result){
        if(entry.second == maxCount){
            maxCountChars[entry.first] = entry.second;
        }
    }
    return maxCountChars;
}