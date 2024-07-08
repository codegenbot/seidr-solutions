```cpp
int luhn(std::vector<std::uint8_t> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (auto i = digits.rbegin(); i != digits.rend(); ++i) {
        std::uint8_t digit = *i;
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += static_cast<int>(digit);
        doubleNext = !doubleNext;
    }
    return sum;
}