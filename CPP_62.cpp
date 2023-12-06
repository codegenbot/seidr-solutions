#include <iostream>

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for (int i = 0; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    std::vector<float> xs = {3, 1, 2, 4, 5};
    std::vector<float> ys = derivative(xs);
    for (auto x : ys) {
        std::cout << x << " ";
    }
    return 0;
}