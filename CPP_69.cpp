int result = -1;
    for (int num : lst) {
        int count = 0;
        for (int i : lst) {
            if (i == num) {
                count++;
            }
        }
        if (count >= num && num > result) {
            result = num;
        }
    }
    return result;
}