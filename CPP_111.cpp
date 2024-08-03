map<char, int> histogram(string test);  
bool issame(map<char,int> a, map<char,int> b){  
    for (const auto& entry : a) {  
        if (b.find(entry.first) == b.end() || b[entry.first] != entry.second) {  
            return false;  
        }  
    }  
    return true;  
}  

map<char, int> histogram(string test){  
    map<char, int> result;  
    istringstream iss(test);  
    string word;  
    while (iss >> word) {  
        for (char c : word) {  
            result[c]++;  
        }  
    }  
    int maxCount = 0;  
    for (const auto& entry : result) {  
        maxCount = max(maxCount, entry.second);  
    }  
    map<char, int> maxChars;  
    for (const auto& entry : result) {  
        if (entry.second == maxCount) {  
            maxChars[entry.first] = entry.second;  
        }  
    }  
    return maxChars;  
}  