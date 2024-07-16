vector<int> count = {0, 0};
    while (num != 0) {
        int digit = abs(num) % 10;
        count[digit % 2]++;
        num /= 10;
    }
    return count;
}