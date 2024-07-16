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
    // Test cases
    assert(double_the_difference({1.0, 2.0, 3.0, 4.0}) == 10);
    assert(double_the_difference({1.5, 2.5, 3.5, 4.5}) == 0);
    assert(double_the_difference({-1.0, -2.0, -3.0, -4.0}) == 0);
    assert(double_the_difference({1.0, 3.0, 5.0, 7.0}) == 35);

    return 0;
}