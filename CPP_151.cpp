#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            odd_sum += static_cast<long long>(num) * static_cast<long long>(num);
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long result = double_the_difference(lst);
    return 0;
}