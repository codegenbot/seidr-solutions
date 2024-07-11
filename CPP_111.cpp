map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            freq[c]++;
        }
    }
    
    map<char, int> result;
    int maxFreq = 0;
    for (const auto& it : freq) {
        if (it.second > maxFreq) {
            result.clear();
            result[it.first] = it.second;
            maxFreq = it.second;
        } else if (it.second == maxFreq) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}