```
int luhn(std::vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        int digit = numbers[i] * ((numbers.size() - i) % 2 == 1 ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum % 10 == 0;