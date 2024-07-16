int main() {
    int digits[] = {3,4,5,9,6,7,8,1,6,2,8,4,3,9,5,2};
    int length = sizeof(digits) / sizeof(*digits);
    int result = luhn(digits, length);
    std::cout << "Luhn sum: " << result << std::endl;
    return 0;
}

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