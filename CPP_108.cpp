int count = 0;
    for (int num : n) {
        int sum = 0;
        int tempNum = num;
        while (tempNum != 0) {
            sum += tempNum % 10;
            tempNum /= 10;
        }
        if (num < 0) {
            sum *= -1;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}