#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                odd_sum += pow(num, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.5f, 2.0f, 3.0f, 4.5f};
    long long result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}