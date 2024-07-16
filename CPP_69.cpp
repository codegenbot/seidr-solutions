int result = -1;
    for (int num : lst) {
        int frequency = 0;
        for (int val : lst) {
            if (val == num) {
                frequency++;
            }
        }
        if (num > 0 && num <= frequency) {
            result = max(result, num);
        }
    }
    return result;
}