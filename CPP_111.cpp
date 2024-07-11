map<char, int> histogram(string test) {
    map<char, int> counts;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            counts[c]++;
        }
    }
    
    map<char, int> result;
    int maxCount = 0;
    for (const auto& entry : counts) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            result.clear();
            result.insert(entry);
        } else if (entry.second == maxCount) {
            result.insert(entry);
        }
    }
    
    return result;
}