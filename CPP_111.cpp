map<char, int> histogram(string test){
    map<char, int> freq;
    for(char c : test){
        if(isalpha(c)){
            freq[c]++;
        }
    }
    int maxFreq = 0;
    for(auto it : freq){
        maxFreq = max(maxFreq, it.second);
    }
    map<char, int> result;
    for(auto it : freq){
        if(it.second == maxFreq){
            result[it.first] = it.second;
        }
    }
    return result;
}