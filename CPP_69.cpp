int result = -1;
    for (int num : lst) {
        if (num > 0 && num <= lst.size()) {
            int frequency = count(lst.begin(), lst.end(), num);
            if (frequency >= num && num > result) {
                result = num;
            }
        }
    }
    return result;
}