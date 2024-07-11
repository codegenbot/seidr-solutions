map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    map<char, int> maxOccurrences;
    int maxCount = 0;
    for (const auto& entry : result) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            maxOccurrences.clear();
            maxOccurrences.insert(entry);
        } else if (entry.second == maxCount) {
            maxOccurrences.insert(entry);
        }
    }
    
    return maxOccurrences;
}