int luhn(vector<int> ccNum) {
    int sum = 0;
    for(int i = 0; i < ccNum.size(); i++) {
        if(i % 2 == 1) {
            int digit = ccNum[i] * 2;
            if(digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += ccNum[i];
        }
    }
    return sum;
}