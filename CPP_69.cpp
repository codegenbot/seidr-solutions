int search(vector<int> lst) {
        int maxVal = -1;
        unordered_map<int, int> freqMap;
        
        for (int num : lst) {
            freqMap[num]++;
        }
        
        for (auto& it : freqMap) {
            if (it.first > it.second && it.second > maxVal) {
                maxVal = it.second;
            }
        }
        
        return maxVal;
    }