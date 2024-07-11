int res = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq >= num) {
            res = max(res, num);
        }
    }
    return res;
}