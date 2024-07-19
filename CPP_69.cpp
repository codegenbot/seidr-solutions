int res = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > freq && freq >= res) {
            res = num;
        }
    }
    return res > 0 ? res : -1;
}