#include <iostream>
int luhn(int* numbers) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = numbers[i];
        if (i % 2 == 0) { 
            digit *= 2;
            if (digit > 9)
                digit -= 9; 
        }
        sum += digit;
    }
    return sum;
}

int main() {
    // Example usage: input an array of credit card numbers
    int creditCardNumbers[] = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 1, 7, 3, 9, 1};
    std::cout << "Luhn value: " << luhn(creditCardNumbers) << std::endl;
    return 0;
}