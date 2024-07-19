```cpp
#include <initializer_list>
#include <vector>
#include <cmath>

bool checkSame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % static_cast<int>(2) == 0) {
            float maxEven = -INFINITY;
            for (float val : l) {
                if (checkSame(val, static_cast<int>(val))) {
                    maxEven = std::max(maxEven, val);
                }
            }
            result.push_back(maxEven);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f};
    std::vector<float> output = sort_even(input);
    for (float val : output) {
        std::cout << val << " ";
    }
    return 0;
}