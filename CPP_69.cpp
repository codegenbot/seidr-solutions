int search(vector<int> lst) {
        int ans = -1;
        unordered_map<int, int> freq;
        
        for (int num : lst) {
            freq[num]++;
        }
        
        for (auto it : freq) {
            if (it.first > it.second && it.second >= it.first) {
                ans = max(ans, it.first);
            }
        }
        
        return ans;
    }