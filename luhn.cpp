int luhn(int* numbers) {
    int sum = 0;
    bool doubleNext = true; 
    for (int i = 0; i < 16; i++) {
        int digit = numbers[i];
        if (doubleNext) { 
            digit *= 2;
            if (digit > 9)
                digit -= 9; 
        }
        sum += digit;
        doubleNext = !doubleNext; 
    }
    return sum;
}