```cpp
#include <vector>

int main() {
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 7, 2, 8, 4};
    int result = luhn(digits);
    return 0;
}

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 0)) { 
            int temp = (digits[i] * 2) % 10; 
            if(temp > 9) temp -= 9;
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}