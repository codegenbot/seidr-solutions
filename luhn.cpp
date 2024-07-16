#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2) == 1) {
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9)
                doubleValue -= 9;
            sum += doubleValue;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    std::vector<int> digits;
    for(int i = 0; i < 16; i++) {
        if(i<4)digits.push_back(1);
        else if(i<10)digits.push_back(3);
        else if(i<14)digits.push_back(4);
        else digits.push_back(7);
        if(i>13)break;
    }
    std::cout << luhn(digits) << std::endl;
    return 0;
}