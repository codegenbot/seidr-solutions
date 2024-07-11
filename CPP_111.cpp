map<char, int> histogram(string test) {
    map<char, int> counts;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char c : token) {
            counts[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& kv : counts) {
        maxCount = max(maxCount, kv.second);
    }

    map<char, int> result;
    for (const auto& kv : counts) {
        if (kv.second == maxCount) {
            result[kv.first] = kv.second;
        }
    }
    
    return result;
}