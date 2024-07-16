int evenCount = 0, oddCount = 0;
    int temp = abs(num);
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        temp /= 10;
    }
    return {evenCount, oddCount};
}