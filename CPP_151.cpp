```cpp
#include <vector>
#include <cmath>
#include <initializer_list>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> myVector = {1.5f, 2.0f, 3.25f};
    float result = double_the_difference(myVector);
    // your code here
    return 0;
}