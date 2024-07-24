#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    int n = 0;
    while (std::cin >> input) {
        lst.push_back(input);
        n++;
    }
    float odd_sum = 0.0;
    assert(double_the_difference(lst) == odd_sum);
}