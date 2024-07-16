int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 0)) { 
            int temp = (digits[i] * 2) % 10; 
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}