map<char,int> histogram(string test){
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxLetters;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxLetters[entry.first] = entry.second;
        }
    }
    return maxLetters;
}