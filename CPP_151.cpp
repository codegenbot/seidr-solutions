```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 3.25f, -4.75f, 2.0f};
    long long result = double_the_difference(numbers);
    assert(result == (long long) pow(1.5f, 2) + pow(2.0f, 2));
    return 0;
}