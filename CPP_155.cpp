vector<int> counts(2, 0);
    while (num != 0) {
        if (abs(num) % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
        num /= 10;
    }
    return counts;
}