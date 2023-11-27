#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5};
    long long odd_sum = 1 * 1 + 3 * 3 + 5 * 5; // Example odd_sum for testing
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}