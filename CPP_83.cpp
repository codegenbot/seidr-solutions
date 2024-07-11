int count = 0;
    if (n == 1) return 1;
    count = 2 * 9 * (int)pow(10, n-2);
    return count;
}