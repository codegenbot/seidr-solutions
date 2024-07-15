int max_freq = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq > max_freq) {
            max_freq = freq;
        }
    }
    return max_freq > 0 ? max_freq : -1;
}