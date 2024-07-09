#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.5f, 3.0f, -4.5f, 5.5f};
    int odd_sum = 0;
    
    for (float num : lst) {
        if (num > 0 && fabs(num) == floor(num)) {
            odd_sum += pow(num, 2);
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fabs(num) == floor(num)) {
            sum += pow(num, 2);
        }
    }
    return sum;
}