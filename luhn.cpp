int luhn(int numbers[16]) {
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if ((16 - i) % 2 == 1) { 
            int temp = numbers[i] * 2; 
            if (temp > 9) { 
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += numbers[i]; 
        }
    }
    return sum;
}