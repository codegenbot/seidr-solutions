#include <cmath>
#include <vector>
#include <algorithm>

bool isOdd(float num) {
    return fmod(num, 1) != 0;
}

double double_the_difference(const vector<float>& lst) {
    double odd_sum = 0;
    for (float num : lst) {
        if (isOdd(num)) {
            odd_sum += pow(fmod(num, 1), 2);
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst = {1.2f, -3.4f, 5.6f, 0.7f, -8.9f};
    assert(double_the_difference(lst) == pow(fmod(1.2, 1), 2) + pow(fmod(-3.4, 1), 2) + pow(fmod(5.6, 1), 2));
}