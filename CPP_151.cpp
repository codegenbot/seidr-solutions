#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f};
    long long odd_sum = 0;
    long long result = double_the_difference(lst);
    assert(result == odd_sum);
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}