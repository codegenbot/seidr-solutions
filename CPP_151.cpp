long long total = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num && (int)num % 2 != 0) {
            total += (long long)pow(num, 2);
        }
    }
    return total;
}