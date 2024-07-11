int result = -1;
    for (int num : lst) {
        if (num > 0 && num <= lst.size()) {
            int freq = 0;
            for (int n : lst) {
                if (n == num) {
                    freq++;
                }
            }
            if (freq >= num && num > result) {
                result = num;
            }
        }
    }
    return result;
}