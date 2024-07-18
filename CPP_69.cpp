int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i : lst) {
            if (i == num) {
                freq++;
            }
        }
        if (num > 0 && freq >= num && num > maxFreq) {
            maxFreq = num;
        }
    }
    return maxFreq;
}