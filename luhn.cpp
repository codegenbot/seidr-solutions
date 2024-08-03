int luhn(std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i : digits) {
        if (doubleNext) {
            int doubled = i * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += i;
        }

        doubleNext = !doubleNext;
    }

    return sum;
}