#include <vector>
#include <cmath> // Include cmath for pow function

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2)); // Use static_cast for type conversion
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.0, -2.0};
    
    long long odd_sum = double_the_difference(lst);
    
    return 0;
}