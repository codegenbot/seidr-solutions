#include <iostream>
#include <vector>
#include <cmath>

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};

double double_the_difference(const std::vector<float> &lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2) * 2;
        }
    }
    return sum;
}

int main() {
    double_the_difference(lst);
    return 0;
}