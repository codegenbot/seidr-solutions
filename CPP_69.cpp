int result = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}