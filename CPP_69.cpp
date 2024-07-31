int maxFreq = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (freq >= num && num > maxFreq) {
            maxFreq = num;
        }
    }
    return maxFreq;
}