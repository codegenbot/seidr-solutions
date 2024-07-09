#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i % 3 == 0 && i % 4 != 0) || (i % 4 == 0 && i % 3 != 0)) {
            if (i % 4 == 0 && i % 3 != 0) {
                result += std::pow(lst[i], 3);
            } else {
                result += lst[i] * lst[i];
            }
        }
    }
    return result;
}

int main() {
    int expectedResult = sum_squares({-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5,
                                        14, -14, 6, 13, 11, 16, 16, 4, 10});
    std::cout << expectedResult;
    return 0;
}