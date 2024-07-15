int luhn(vector<int> numbers) {
    int sum = 0;
    bool doubleNext = false;

    for (int i : numbers) {
        if (doubleNext) {
            i *= 2;
            if (i > 9) {
                i -= 9;
            }
        }
        if (i > 9) {
            sum += (i - 9);
        } else {
            sum += i;
        }
        doubleNext = !doubleNext;
    }

    return sum;

}