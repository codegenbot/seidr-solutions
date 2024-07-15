```cpp
int luhn(std::vector<int> numbers) {
    int sum = 0;
    bool isDouble = false;
    for (int i = 0; i < numbers.size(); ++i) {
        int digit = numbers[i];
        if (isDouble) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isDouble = !isDouble;
    }
    return sum % 10 == 0;
}