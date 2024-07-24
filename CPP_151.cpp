#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    while (std::cin >> num) {
        lst.push_back(num);
    }

    double odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}