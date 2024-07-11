int res = -1;
    for (int num : lst) {
        if (num > res && count(lst.begin(), lst.end(), num) >= num) {
            res = num;
        }
    }
    return res;
}