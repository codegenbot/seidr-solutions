int search(vector<int> lst) {
        unordered_map<int, int> freq;
        int res = -1;
        
        for (int num : lst) {
            freq[num]++;
        }
        
        for (auto it : freq) {
            if (it.first > it.second && it.second > res) {
                res = it.second;
            }
        }
        
        return res > 0 ? res : -1;
    }