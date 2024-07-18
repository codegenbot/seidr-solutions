int getMaxFreqNum(const vector<int>& lst) {
    int maxFreqNum = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq >= maxFreqNum) {
            maxFreqNum = freq;
        }
    }
    return maxFreqNum > 0 ? maxFreqNum : -1;
}