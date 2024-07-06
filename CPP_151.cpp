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
    float n;
    
    // Get the input vector
    std::cout << "Enter a sequence of numbers (0 to stop):" << std::endl;
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        lst.push_back(n);
    }

    long long odd_sum = double_the_difference(lst);
    
    // Add a meaningful assertion
    assert(double_the_difference(lst) == odd_sum); 

    return 0;
}