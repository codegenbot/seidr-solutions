int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i : lst) {
            if (i == num) {
                freq++;
            }
        }
        if (freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}