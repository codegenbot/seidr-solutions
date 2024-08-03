#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    int num;
    float max = -INFINITY;

    // Input numbers
    while (true) {
        std::cin >> num;
        if (!std::cin) break;
        l.push_back(num);
    }

    for (const auto& val : l) {
        if (val > max)
            max = val;
    }

    return static_cast<int>(max);
}