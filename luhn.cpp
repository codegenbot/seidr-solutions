int luhnCheck(vector<int>& card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        if (i % 2 == 1) {
            int temp = card[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += card[i];
        }
    }
    return sum % 10; 
}