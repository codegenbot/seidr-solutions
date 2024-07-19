int result = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num && num > result) {
            result = num;
        }
    }
    return result;
}