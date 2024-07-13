int Luhn(int num[]) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if ((i % 2) == 1) {
            int temp = (num[i] * 2);
            if (temp > 9) 
                temp -= 9;
            sum += temp;
        } else 
            sum += num[i];
    }
    return sum;
}