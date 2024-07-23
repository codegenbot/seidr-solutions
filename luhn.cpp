int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        if (isDouble) {
            int digit = digits[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
        } else {
            digit = digits[i];
        }

        sum += digit;
        isDouble = !isDouble;
    }

    return sum % 10; 
}

int main() {
    std::cout << luhn(std::vector<int>({4,3,2,1,8,7,6,5,4,3,2,1,6,5,4,3})) << std::endl;
    return 0;
}