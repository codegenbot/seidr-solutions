int search(vector<int> lst) {
        int maxFreqNumber = -1;
        unordered_map<int, int> freqMap;
        
        for (int num : lst) {
            freqMap[num]++;
        }
        
        for (const auto& pair : freqMap) {
            if (pair.second >= pair.first && pair.first > maxFreqNumber) {
                maxFreqNumber = pair.first;
            }
        }
        
        return maxFreqNumber;
    }