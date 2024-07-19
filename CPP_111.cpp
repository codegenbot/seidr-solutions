map<char, int> histogram(string test){
    map<char, int> freq;
    stringstream ss(test);
    string word;
    while(ss >> word){
        for(char c : word){
            freq[c]++;
        }
    }
    int maxFreq = 0;
    for(const auto &entry : freq){
        maxFreq = max(maxFreq, entry.second);
    }
    map<char, int> result;
    for(const auto &entry : freq){
        if(entry.second == maxFreq){
            result.insert(entry);
        }
    }
    return result;
}