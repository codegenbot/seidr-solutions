int maxFreq = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq > maxFreq) {
            maxFreq = freq;
        }
    }
    if (maxFreq == -1) {
        return -1;
    }
    return maxFreq;
}