int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i : lst) {
            if (i == num) {
                freq++;
            }
        }
        if (num > freq && freq > maxFreq) {
            maxFreq = freq;
        }
    }
    if (maxFreq == -1) {
        return -1;
    }
    return maxFreq;
}