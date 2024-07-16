map<char,int> histogram(string test){
    map<char,int> count;
    
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (auto it : count) {
        maxCount = max(maxCount, it.second);
    }
    
    map<char,int> result;
    for (auto it : count) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}