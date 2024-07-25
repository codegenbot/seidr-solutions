int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for(int i = cardNumber.size() - 1; i >= 0; --i) {
        if(doubleNext) {
            int temp = cardNumber[i] * 2;
            if(temp > 9) {
                sum += (temp % 10) + 1;
            } else {
                sum += temp;
            }
            doubleNext = false;
        } else {
            sum += cardNumber[i];
            doubleNext = true;
        }
    }

    return sum;
}