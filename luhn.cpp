int luhn(vector<int>& creditCardNumber) {
    int sum = 0;
    for (int i = 0; i < creditCardNumber.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = creditCardNumber[i] * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += creditCardNumber[i];
    }
    return sum;
}