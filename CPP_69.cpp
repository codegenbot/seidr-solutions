int search(vector<int> lst) {
        unordered_map<int, int> freqMap;
        for (int num : lst) {
            freqMap[num]++;
        }
        
        int res = -1;
        for (auto& pair : freqMap) {
            if (pair.first > pair.second && pair.second > res) {
                res = pair.second;
            }
        }
        
        return res;
    }