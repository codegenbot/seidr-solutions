int search(vector<int> lst) {
        int res = -1;
        unordered_map<int, int> freq;
        
        for (int num : lst) {
            freq[num]++;
        }
        
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second >= it->first && it->first > res) {
                res = it->first;
            }
        }
        
        return res;
    }