int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num == freq && num > maxFreq) {
            maxFreq = num;
        }
    }
    return maxFreq;
}