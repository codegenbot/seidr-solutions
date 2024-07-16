#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false; 
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int temp = (digits[i] * 2) % 10;
            if(temp > 9) temp -= 9;
            sum += temp;
            doubleNext = false;
        } else {
            sum += digits[i];
            doubleNext = !doubleNext; 
        }
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1,6};
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}