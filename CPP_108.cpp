int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (num < 0) {
            if (sum * -1 > 0) {
                count++;
            }
        } else {
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}