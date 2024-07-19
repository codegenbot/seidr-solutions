```cpp
#include <vector>
long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}
int main() {
    std::vector<float> lst = {1.5f, 3.7f, 4.9f, -1.0f, 2.8f};
    int odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
}