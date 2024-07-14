int luhn(const std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (auto i = digits.rbegin(); i != digits.rend(); ++i) {
        if (doubleNext) {
            *i *= 2;
            if (*i > 9) {
                *i -= 9;
            }
        }
        sum += *i;
        doubleNext = !doubleNext;
    }

    return sum;
}