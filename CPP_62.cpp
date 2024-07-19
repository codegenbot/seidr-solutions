#include <vector>

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    std::vector<float> input = {2.0, 3.0, 4.0, 5.0};
    std::vector<float> output = derivative(input);
    return 0;
}