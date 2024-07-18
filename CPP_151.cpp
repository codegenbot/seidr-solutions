#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)num * num;
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.5, 2, 3, 4.5, 5};
    std::cout << double_the_difference(lst);
    return 0;
}