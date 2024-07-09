int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int elem : lst) {
            if (elem == num) {
                freq++;
            }
        }
        if (freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}