```cpp
int luhn(int* digits, int n) {
    int sum = 0;
    bool isSecond = false; 
    for (auto i = 0; i < n; ++i) {
        if ((n - i - 1) % 2 == 0) { 
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else { 
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    int n = 16; // Assuming the number of digits is 16
    int digits[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; 
    std::cout << luhn(digits, n) << std::endl;
    return 0;
}