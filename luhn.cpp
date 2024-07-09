int luhn(int* numbers) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = numbers[i];
        if ((i % 2 == 0)) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    int numbers[] = {4,5,3,3,1,7,3,2,3,1,0,5,1,6,5,5};
    std::cout << luhn(numbers) << std::endl; // Should print 44
}