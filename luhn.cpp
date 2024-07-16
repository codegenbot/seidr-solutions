#include <vector>
#include <string>
#include <initializer_list>

int luhn(std::initializer_list<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = digits.begin()[i] * ((i % 2) == 1 ? 2 : 1);
        if (temp > 9)
            temp -= 9;
        sum += temp;
    }
    return sum;