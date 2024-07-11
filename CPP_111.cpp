map<char,int> histogram(string test){
    map<char,int> frequency;
    for(char c : test){
        if(c != ' '){
            frequency[c]++;
        }
    }
    map<char,int> result;
    int maxFreq = 0;
    for(auto it : frequency){
        if(it.second >= maxFreq){
            maxFreq = it.second;
            result[it.first] = it.second;
        }
    }
    return result;
}