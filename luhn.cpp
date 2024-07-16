```cpp
int luhn(std::string cardNumber) {
    std::vector<int> digits;
    for (char c : cardNumber) {
        if (c >= '0' && c <= '9') {
            digits.push_back(c - '0');
        }
    }
    return luhn(digits);
}