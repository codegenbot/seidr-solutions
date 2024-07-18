map<char, int> histogram(string test){
    map<char, int> freq;
    for(char c : test){
        if(c != ' '){
            freq[c]++;
        }
    }
    int maxCount = 0;
    for(auto it : freq){
        maxCount = max(maxCount, it.second);
    }
    map<char, int> result;
    for(auto it : freq){
        if(it.second == maxCount){
            result[it.first] = it.second;
        }
    }
    return result;
}