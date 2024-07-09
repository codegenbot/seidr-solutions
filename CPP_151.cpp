#include <iostream>
#include <cmath>
#include <vector>

long double_the_difference(std::vector<float> lst) {
    long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
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

    long odd_sum = double_the_difference(lst);

    return 0;
}