map<char,int> histogram(string test);

bool issame(const map<char,int>& a, const map<char,int>& b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (const auto& entry : a) {
        if (b.find(entry.first) == b.end() || b.at(entry.first) != entry.second) {
            return false;
        }
    }
    
    return true;
}

map<char,int> histogram(string test){
    map<char,int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }
    map<char,int> mostRepeated;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeated[entry.first] = entry.second;
        }
    }
    return mostRepeated;
}