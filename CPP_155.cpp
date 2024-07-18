vector<int> result = {0, 0};
    
    while (num != 0) {
        int digit = abs(num % 10);
        if (digit % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
        num /= 10;
    }
    
    return result;
}