int res = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > 0 && freq >= num && num > res) {
            res = num;
        }
    }
    return res;
}