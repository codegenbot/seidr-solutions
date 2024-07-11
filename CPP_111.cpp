map<char, int> histogram(string test) {
    map<char, int> hist;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            hist[c]++;
        }
    }
    
    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : hist) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}