#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) {
            sum += std::pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> my_lst = {1.5f, 2.3f, 3.7f}; 
    int odd_sum = double_the_difference(my_lst); 
    return 0; 
}