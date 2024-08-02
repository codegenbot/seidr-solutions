vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> uniqueMap;
    vector<int> result;

    for (int num : numbers) {
        if (!uniqueMap.count(num) || !uniqueMap[num]) {
            uniqueMap[num] = true;
            result.push_back(num);
        }
    }

    return result;
}