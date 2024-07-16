int result = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}