map<char,int> histogram(string test){
    map<char, int> freq;
    stringstream ss(test);
    string token;
    
    while (ss >> token) {
        for (char c : token) {
            freq[c]++;
        }
    }
    
    int maxFreq = 0;
    for (const auto& it : freq) {
        maxFreq = max(maxFreq, it.second);
    }
    
    map<char, int> result;
    for (const auto& it : freq) {
        if (it.second == maxFreq) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}