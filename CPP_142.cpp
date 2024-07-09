#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) {
            sum += std::pow(lst[i], 2);
        } else if (i % 4 == 0 && i % 3 != 0) {
            sum += std::pow(lst[i], 3);
        } else {
            sum += lst[i];
        }
    }
    return sum;
}