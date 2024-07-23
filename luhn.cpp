int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 0)) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;