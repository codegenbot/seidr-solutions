long long total = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            total += pow(num, 2);
        }
    }
    return total;
}