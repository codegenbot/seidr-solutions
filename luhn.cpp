int luhn(const std::vector<int>& digits) {
    int sum = 0;
    std::vector<int> newDigits = digits;
    for (int i = newDigits.size() - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            newDigits[i] *= 2;
            if (newDigits[i] > 9)
                newDigits[i] -= 9;
        }
        sum += newDigits[i];
    }
    return sum;
}