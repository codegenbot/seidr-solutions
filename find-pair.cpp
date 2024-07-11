```cpp
std::pair<int, int> findPair(std::vector<int>& numVec, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < numVec.size(); i++) {
        int complement = target - numVec[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, numVec[i]};
        }
        numMap[numVec[i]] = i;
    }
    return {0, 0};
}