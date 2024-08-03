int luhn(const vector<int>& cardNumber) {
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; --i){
        if(i % 2 == 1) {
            int digit = cardNumber[i] * 2;
            if(digit > 9)
                digit -= 9;
            sum += digit;
        }
        else
            sum += cardNumber[i];
    }
    return sum;
}