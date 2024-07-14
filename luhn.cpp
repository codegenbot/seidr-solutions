int luhnCheck(vector<int> cardNum) {
    int sum = 0;
    for(int i = cardNum.size() - 1; i >= 0; i--) {
        if(i % 2 != 0) {
            int digit = cardNum[i] * 2;
            if(digit > 9) digit -= 9;
            sum += digit;
        } else {
            sum += cardNum[i];
        }
    }
    return sum;
}