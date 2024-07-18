int search(vector<int> lst) {
        unordered_map<int, int> freqMap;
        for (int num : lst) {
            freqMap[num]++;
        }
        
        int res = -1;
        for (auto& entry : freqMap) {
            if (entry.first > entry.second && entry.second >= entry.first) {
                res = max(res, entry.first);
            }
        }
        
        return res;
    }