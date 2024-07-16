map<char,int> result;
    istringstream iss(test);
    string word;
    while(iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char,int> finalResult;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            finalResult[entry.first] = entry.second;
        }
    }
    return finalResult;
}