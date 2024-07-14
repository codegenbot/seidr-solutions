```cpp
int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 1) && (digits[i] * 2 > 9)) { 
            sum += (digits[i] * 2) % 9 + 1;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}