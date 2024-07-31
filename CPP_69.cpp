int search(vector<int> lst) {
        int maxInt = -1;
        unordered_map<int, int> freqMap;

        for (int num : lst) {
            freqMap[num]++;
        }

        for (const auto& entry : freqMap) {
            if (entry.first > entry.second && entry.first > maxInt) {
                maxInt = entry.first;
            }
        }

        return maxInt;
    }