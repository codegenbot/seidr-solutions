```cpp
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && modf(x, &x) == 0) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> inputList; // define the list
    float odd_sum = double_the_difference(inputList); // call and store the result
    // assert your expected value with the returned value of function here.
}