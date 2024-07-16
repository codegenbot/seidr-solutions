int result = -1;
    for (int num : lst) {
        int frequency = 0;
        for (int i : lst) {
            if (i == num) {
                frequency++;
            }
        }
        if (num > 0 && frequency >= num && num > result) {
            result = num;
        }
    }
    return result;
}