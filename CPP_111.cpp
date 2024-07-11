map<char, int> result;
    map<char, int> count;
    
    for (char ch : test) {
        if (ch != ' ') {
            count[ch]++;
        }
    }
    
    int maxCount = 0;
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }
    
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    
    return result;