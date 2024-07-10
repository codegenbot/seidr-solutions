int luhn(vector<int> card) {
    int sum = 0;
    for(int i = card.size() - 1; i >= 0; --i) {
        if(i % 2 == 1) {
            int num = card[i] * 2;
            if(num > 9) {
                num -= 9;
            }
            sum += num;
        } else {
            sum += card[i];
        }
    }
    return sum;
}