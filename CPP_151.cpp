#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<int>(pow(num, 2));
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0};
    long long odd_sum = 14;
    assert(double_the_difference(lst) == odd_sum);
}