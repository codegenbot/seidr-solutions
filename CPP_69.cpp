int search(vector<int> lst) {
        int res = -1;
        unordered_map<int, int> freq;
        for (int num : lst) {
            freq[num]++;
        }
        for (auto it : freq) {
            if (it.first > it.second && it.first > res) {
                res = it.first;
            }
        }
        return res;
    }