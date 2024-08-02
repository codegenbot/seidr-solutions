int luhn(vector<int> cc) {
    int sum = 0;
    for (int i = cc.size() - 1; i >= 0; --i) {
        if ((cc[i] * 2) > 9) {
            sum += (cc[i] * 2) - 9;
        } else {
            sum += cc[i] * 2;
        }
        if (i % 2 != 0) {
            sum += cc[i];
        }
    }
    return sum;
}