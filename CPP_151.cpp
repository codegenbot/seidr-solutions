```cpp
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
    float input;
    long long odd_sum = 0.0;
    
    // Read input from the user
    while (std::cin >> input) {
        if (input > 0 && modf(input, &input) == 0) {
            odd_sum += pow(input, 2);
        }
        lst.push_back(input);
    }
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}