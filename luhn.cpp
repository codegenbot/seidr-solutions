int luhn(int* digits, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if ((i % 2) == 0) { 
            sum += digits[i];
        } else {
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9)
                doubleValue -= 9;
            sum += doubleValue; 
        }
    }
    return sum;
}

int main() {
    int digits[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int result = luhn(digits, sizeof(digits) / sizeof(digits[0]));
    std::cout << "Luhn's algorithm result: " << result << std::endl;
    return 0;
}