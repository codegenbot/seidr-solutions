#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == int(num) && int(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum * 2;
}

int main() {
    std::vector<float> lst = {1.5, 2, 3.2, 4.0, 5.5};
    long long odd_sum = double_the_difference(lst);
    return 0;
}