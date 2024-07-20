#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.7f, -4.2f}; 
    float odd_sum = double_the_difference(lst);
    assert(odd_sum == 9.25f); 
    return 0;
}