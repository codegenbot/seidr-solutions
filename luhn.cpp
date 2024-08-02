int luhn(const vector<int>& card) {
    int sum = 0;
    bool doubleNext = false;

    for (int i : card) {
        if (!doubleNext) {
            sum += i;
        } else {
            int doubled = i * 2;
            sum += (doubled > 9) ? doubled - 9 : doubled;
        }
        doubleNext = !doubleNext;
    }

    return sum;
}