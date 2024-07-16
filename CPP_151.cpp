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
    std::vector<float> test1 = {3.0, 4.0, 5.0, 6.0, 7.0};
    assert(double_the_difference(test1) == 40);

    std::vector<float> test2 = {2.0, 3.0, 4.0, 5.0, 6.0};
    assert(double_the_difference(test2) == 0);

    std::vector<float> test3 = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(double_the_difference(test3) == 1);

    return 0;
}