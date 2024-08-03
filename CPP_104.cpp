bool issame(int n) {
    unordered_set<int> digits;
    while (n > 0) {
        int digit = n % 10;
        if (digits.count(digit)) {
            return true;
        }
        digits.insert(digit);
        n /= 10;
    }
    return false;
}