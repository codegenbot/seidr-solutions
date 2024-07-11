vector<int> freq(1001, 0);
    int res = -1;
    for (int num : lst) {
        freq[num]++;
        if (freq[num] >= num && num > res) {
            res = num;
        }
    }
    return res;
}