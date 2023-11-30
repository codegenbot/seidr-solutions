map<char,int> histogram(string test){
    map<char, int> result;
    map<char, int> count;
    
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            count[test[i]]++;
        }
    }
    
    int maxCount = 0;
    for (auto it = count.begin(); it != count.end(); it++) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }
    
    for (auto it = count.begin(); it != count.end(); it++) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    
    return result;
}