int luhn(vector<int> numbers) {
    int sum = 0;
    bool alternate = false;
    
    for (int i = numbers.size() - 1; i >= 0; i--) {
        int digit = numbers[i];
        
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        alternate = !alternate;
    }
    
    return sum;
}