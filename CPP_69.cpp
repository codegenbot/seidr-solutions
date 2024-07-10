int search(vector<int> lst) {
        int maxVal = -1;
        unordered_map<int, int> freqMap;
        
        for (int num : lst) {
            freqMap[num]++;
        }
        
        for (auto& pair : freqMap) {
            if (pair.first > pair.second && pair.first > maxVal) {
                maxVal = pair.first;
            }
        }
        
        return maxVal;
    }