```cpp
#include <vector>
#include <string>

int luhn(std::string digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = std::stoi(digits.substr(i, 1));
        if ((i % 2) == 1) { 
            temp *= 2;
            if (temp > 9)
                temp -= 9;
        }
        sum += temp;
    }
    return sum;