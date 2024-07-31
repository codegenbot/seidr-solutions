int even = 0, odd = 0;
    while (num != 0) {
        int digit = abs(num % 10);
        if (digit % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        num /= 10;
    }
    return {even, odd};
}