int res = -1;
    vector<int> freq(105, 0);
    for (int num : lst) {
        freq[num]++;
    }
    
    for (int i = 1; i < 105; ++i) {
        if (freq[i] >= i) {
            res = i;
        }
    }

    return res;
}