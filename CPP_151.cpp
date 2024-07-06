#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;

    // Get the input vector
    while(std::cin >> num) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);
    std::cout << "The sum of squares is: " << odd_sum << std::endl; 

    return 0;
}