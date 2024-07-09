#include <vector>
#include <cmath>

double double_the_difference(const std::vector<float>& lst) {
    double sum = 0;
    for (float num : lst) {
        if (fmod(num, 1) > 0.5) {
            sum += pow(fmod(num, 1), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.2f, -3.4f, 5.6f, 0.7f, -8.9f};
    float odd_sum = double_the_difference(lst);
    assert(pow(fmod(1.2, 1), 2) + pow(fmod(-3.4, 1), 2) + pow(fmod(5.6, 1), 2) == odd_sum);
}