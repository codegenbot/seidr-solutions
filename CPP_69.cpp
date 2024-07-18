int maxFreqNum = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > freq && freq >= maxFreqNum) {
            maxFreqNum = freq;
        }
    }
    return maxFreqNum > 0 ? maxFreqNum : -1;
}