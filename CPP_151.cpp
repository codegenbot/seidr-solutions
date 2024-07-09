```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num - floor(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;  
    float sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num - floor(num), 2);
        } else {
            sum -= pow(num - floor(num), 2);
        }
    }
    std::cout << "The double the difference is: " << sum << std::endl;
    return 0;
}