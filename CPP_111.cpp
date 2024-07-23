map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    
    map<char, int> maxOccurrences;
    int maxCount = 0;
    for (const auto& entry : result) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            maxOccurrences.clear();
            maxOccurrences[entry.first] = entry.second;
        } else if (entry.second == maxCount) {
            maxOccurrences[entry.first] = entry.second;
        }
    }
    
    return maxOccurrences;
}