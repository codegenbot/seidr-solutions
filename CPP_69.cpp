int result = -1;
    for (int num : lst) {
        int count = 0;
        for (int n : lst) {
            if (n == num) {
                count++;
            }
        }
        if (count >= num && num > result) {
            result = num;
        }
    }
    return result;
}