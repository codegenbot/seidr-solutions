#include <vector>
long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 2.5f, 3.5f, 4.5f};
    float odd_sum = double_the_difference(lst);
    assert(odd_sum == 30.25);
    return 0;
}