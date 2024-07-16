int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int val : lst) {
            if (val == num) {
                freq++;
            }
        }
        if (num == freq && num > maxFreq) {
            maxFreq = num;
        }
    }
    return maxFreq;
}