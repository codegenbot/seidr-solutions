int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp_num = abs(num);
        while (temp_num != 0) {
            sum += temp_num % 10;
            temp_num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}