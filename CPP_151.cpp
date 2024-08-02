#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 1.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.0f, 4.25f};
    float odd_sum = 0.0;
    long long result = double_the_difference(lst);
    assert(result == odd_sum); 
    std::cout << "The sum of squares of positive integers in the list is: " << result << std::endl;
    return 0;
}