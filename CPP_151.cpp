long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 == 1) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}