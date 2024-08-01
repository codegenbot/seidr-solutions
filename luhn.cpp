int luhn(vector<int>& card) {
    int sum = 0;
    for(int i = 0; i < card.size(); i++) {
        if((i+1) % 2 != 0) {
            int doubleDigit = card[i] * 2;
            if(doubleDigit > 9) {
                sum += doubleDigit - 9;
            } else {
                sum += doubleDigit;
            }
        } else {
            sum += card[i];
        }
    }
    return sum;
}