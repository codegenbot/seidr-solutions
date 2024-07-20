int even = 0, odd = 0;
    while (num != 0) {
        if ((num % 10) % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        num /= 10;
    }
    return {even, odd};
}