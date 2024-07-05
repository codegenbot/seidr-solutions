int count = 0;
    for (int num : n) {
        int temp = abs(num);
        int sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) count++;
    }
    return count;
}