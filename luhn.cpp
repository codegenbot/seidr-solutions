int luhn(vector<int> digits) {
    int sum = 0;
    bool alt = false;
    for (int i : digits) {
        if (alt) {
            i *= 2;
            if (i > 9) {
                i -= 9;
            }
        }
        sum += i;
        alt = !alt;
    }
    return sum;
}