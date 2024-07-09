```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isOdd = true; 
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (isOdd) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isOdd = !isOdd; 
    }
    return sum;
}

int main() {
    std::vector<int> digits(16);
    for(int i=0;i<16;++i)
    {
        digits[i] = (i%2==0)?(i+1):(i+4);
    }
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}