int maxVal = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > maxVal && freq >= num) {
            maxVal = num;
        }
    }
    return maxVal;
}