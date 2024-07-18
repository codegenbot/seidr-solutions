map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> freq;
    
    for(char c : test){
        if(c != ' '){
            freq[c]++;
        }
    }
    
    int max_freq = 0;
    for(auto it : freq){
        max_freq = max(max_freq, it.second);
    }
    
    for(auto it : freq){
        if(it.second == max_freq){
            result[it.first] = it.second;
        }
    }
    
    return result;
}