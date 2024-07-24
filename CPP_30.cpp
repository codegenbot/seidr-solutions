#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    if(abs(a - b) > 1e-5) {
        return false;
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    // Example usage
    std::vector<float> input = {-1.5, 2.5, -3.5, 4.5};
    auto positive_input = get_positive(input);

    return 0;
}