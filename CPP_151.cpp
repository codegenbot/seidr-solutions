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
    assert(double_the_difference({3.0, 4.0, 5.0, 6.0}) == 9);
    assert(double_the_difference({-2.0, 4.0, 5.0, 7.0}) == 0);
    assert(double_the_difference({1.0, 2.0, 3.0, 4.0}) == 0);

    return 0;
}