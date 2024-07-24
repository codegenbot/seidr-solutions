int luhnCheck(vector<int> cardNum) {
    int sum = 0;
    bool isSecond = true;

    for(int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i];
        if(isSecond) {
            digit *= 2;
            if(digit > 9)
                digit -= 9;
        }
        sum += digit;
        isSecond = !isSecond;
    }

    return sum;
}