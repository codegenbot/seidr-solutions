map<char,int> histogram(string test){
    map<char, int> frequency;
    for (char c : test) {
        if (c != ' ') {
            frequency[c]++;
        }
    }
    
    map<char, int> result;
    int maxFrequency = 0;
    
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        if (it->second > maxFrequency) {
            result.clear();
            result[it->first] = it->second;
            maxFrequency = it->second;
        } else if (it->second == maxFrequency) {
            result[it->first] = it->second;
        }
    }
    
    return result;
}