#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

void sort_even(std::vector<float> vec) {
    std::sort(vec.begin(), vec.end(), [](float a, float b) {
        return ((int)a % 2 == 0) && ((int)b % 2 == 0) && a < b;
    });
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    sort_even({4.0, 2.0, 6.0, 1.0, 3.0, 5.0});
    return 0;
}