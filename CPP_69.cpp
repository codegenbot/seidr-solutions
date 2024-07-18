int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int val : lst) {
            if (val == num) {
                freq++;
            }
        }
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}