int luhn(vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = 15; i >= 0; --i) {
        if (!doubleNext) {
            sum += digits[i];
        } else {
            int temp = 2 * digits[i];
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        }

        doubleNext = !doubleNext;
    }

    return sum;
}