int search(vector<int> lst) {
        unordered_map<int, int> freq;
        for (int num : lst) {
            freq[num]++;
        }
        
        int res = -1;
        for (auto it : freq) {
            if (it.first > it.second && it.second >= it.first) {
                res = max(res, it.first);
            }
        }
        
        return res;
    }