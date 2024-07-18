vector<int> remove_duplicates(const vector<int>& numbers) {
    unordered_map<int, int> numCount;
    for (int num : numbers) {
        numCount[num]++;
    }
    
    vector<int> uniqueNumbers;
    for (const auto& entry : numCount) {
        if (entry.second == 1) {
            uniqueNumbers.push_back(entry.first);
        }
    }
    
    return uniqueNumbers;
}