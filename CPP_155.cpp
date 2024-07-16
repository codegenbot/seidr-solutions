vector<int> counts(2, 0);
    while (num != 0) {
        int digit = abs(num % 10);
        counts[digit % 2]++;
        num /= 10;
    }
    return counts;
}