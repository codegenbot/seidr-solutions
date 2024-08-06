#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

void sort_even(std::vector<float>& vec) {
    std::sort(vec.begin(), vec.end(), [](float a, float b) { return ((int)a % 2 == 0 && (int)b % 2 == 0 && a < b); });
}

int main() {
    std::vector<float> vec = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(vec);
    return 0;
}