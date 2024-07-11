map<char,int> histogram(string test){
    map<char,int> freq;
    istringstream iss(test);
    string word;
    while(iss >> word){
        for(char c : word){
            freq[c]++;
        }
    }
    int max_freq = 0;
    for(auto& p : freq){
        max_freq = max(max_freq, p.second);
    }
    map<char,int> result;
    for(auto& p : freq){
        if(p.second == max_freq){
            result[p.first] = p.second;
        }
    }
    return result;
}