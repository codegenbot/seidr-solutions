int luhnCheck(vector<int> card) {
    int sum = 0;
    bool doubling = false;

    for (int i : card) {
        if (doubling) {
            i *= 2;
            if (i > 9) i -= 9;
        }
        sum += i;
        doubling = !doubling;
    }

    return sum;
}