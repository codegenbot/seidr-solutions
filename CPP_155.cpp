int even_count = 0, odd_count = 0;
    while (num != 0) {
        int digit = abs(num) % 10;
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        num /= 10;
    }
    return {even_count, odd_count};
}