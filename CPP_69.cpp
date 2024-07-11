int search(vector<int> lst) {
        int maxVal = -1;
        unordered_map<int, int> freq;
        
        for (int num : lst) {
            freq[num]++;
            if (num > maxVal && freq[num] >= num) {
                maxVal = num;
            }
        }
        
        return maxVal;
    }