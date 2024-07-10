int luhn(vector<int> card_num) {
    int sum = 0;
    for(int i=card_num.size()-1; i>=0; i--) {
        if(i%2 != 0) {
            card_num[i] *= 2;
            if(card_num[i] > 9) {
                card_num[i] -= 9;
            }
        }
        sum += card_num[i];
    }
    return sum;
}