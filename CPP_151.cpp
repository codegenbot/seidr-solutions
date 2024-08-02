#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float odd_sum = 0.0;

    // fill lst with input values...

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}