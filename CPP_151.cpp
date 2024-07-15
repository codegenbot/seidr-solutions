#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && (int)num == num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.5, 2, 3.5, 4, 5.5};
    assert(double_the_difference(lst) == 44);
    return 0;
}