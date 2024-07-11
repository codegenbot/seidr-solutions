vector<int> freq(2001, 0);
    for (int num : lst) {
        freq[num]++;
    }

    int res = -1;
    for (int i = 1; i <= 2000; ++i) {
        if (freq[i] >= i) {
            res = i;
        }
    }
    
    return res;
}