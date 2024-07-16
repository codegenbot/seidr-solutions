int res = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num && num > res) {
            res = num;
        }
    }
    return res;
}