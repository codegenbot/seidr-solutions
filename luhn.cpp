#include <iostream>
#include <vector>

int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1 && digits[i] * 2 > 9) || (i % 2 == 0)) {
            sum += digits[i];
        } else {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        }
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1,6};
    std::cout << luhn(digits) << std::endl;
    return 0;
}