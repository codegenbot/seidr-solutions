vector<int> remove_duplicates(const vector<int>& numbers) {
    unordered_map<int, int> frequencyMap;
    for (int num : numbers) {
        frequencyMap[num]++;
    }
    vector<int> uniqueNumbers;
    for (auto& entry : frequencyMap) {
        if (entry.second == 1) {
            uniqueNumbers.push_back(entry.first);
        }
    }
    return uniqueNumbers;
}