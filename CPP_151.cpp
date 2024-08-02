#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.0, 3.0, 4.0, 5.0, 6.0};
    long long result = double_the_difference(lst);

    long long odd_sum = 0;
    assert(result == odd_sum);

    return 0;
}