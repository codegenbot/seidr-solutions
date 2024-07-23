#include <iostream>
#include <vector>

int luhn(int* digits, int num_digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = num_digits - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (isDouble) {
            if (digit * 2 > 9) {
                digit = digit * 2 - 9;
            } else {
                digit *= 2;
            }
        }

        sum += digit; 
        isDouble = !isDouble;
    }

    return sum % 10;

}

int main() {
    int num_digits = 16; // Assuming a vector of 16 digits
    int* digits = new int[num_digits]; // Dynamically allocate an array of integers
    for (int i = 0; i < num_digits; ++i) {
        digits[i] = i % 10; // Initialize the array with some values
    }
    int result = luhn(digits, num_digits); // Pass the dynamically allocated array and its size
    delete[] digits; // Don't forget to deallocate the memory
    return 0;
}