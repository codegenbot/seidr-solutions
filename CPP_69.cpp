int result = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq >= result) {
            result = num;
        }
    }
    return result;
}