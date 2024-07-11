int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > 0 && num <= freq) {
            result = max(result, num);
        }
    }
    return result;
}