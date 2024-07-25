#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && static_cast<int>(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.7f, -4.9f, 8.8f, 2.5f};
    long long result = double_the_difference(lst);
    std::cout << "The doubled difference is: " << result << std::endl;
    return 0;
}