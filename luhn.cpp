int luhn(std::vector<int> cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = cardNumber[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cardNumber[i];
        }
    }
    return sum;
}