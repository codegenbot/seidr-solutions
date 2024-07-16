```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) { 
            int temp = (digits[i] * 2) % 10; 
            if(temp > 9) temp -= 9;
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0};
    int result = luhn(digits);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}