int luhn(int* numbers) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = numbers[i];
        if (i % 2 == 0) { 
            digit *= 2;
            if (digit > 9)
                digit -= 9; 
        }
        sum += digit;
    }
    return sum;
}