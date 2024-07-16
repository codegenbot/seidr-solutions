int luhnCheck(vector<int>& card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; i--) {
        if ((card.size() - i - 1) % 2 == 0) {
            int temp = card[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += card[i];
        }
    }
    return sum;
}