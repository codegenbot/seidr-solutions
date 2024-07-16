int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (freq >= num && num > maxFreq) {
            maxFreq = num;
        }
    }
    return maxFreq;
}