```cpp
int luhn(const std::vector<int16_t> cc) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < cc.size(); ++i) {
        int digit = cc[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}