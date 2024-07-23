int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 1)) { 
            int doubled = digits[i] * 2; 
            sum += (doubled > 9) ? doubled - 9 : doubled; 
        } else {
            sum += digits[i];
        }
    }
    return sum;
}