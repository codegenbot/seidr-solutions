int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int elem : lst) {
            if (elem == num) {
                freq++;
            }
        }
        if (num > 0 && freq >= num) {
            result = max(result, num);
        }
    }
    return result;
}