#include <vector>
#include <functional>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> positive_nums;
    for (float num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

bool issame(const std::function<bool(const std::vector<float>&, const std::vector<float>&)>& comparer,
            const std::vector<float>& a, const std::vector<float>& b) {
    return comparer(a, b);
}

int main() {
    assert (issame([](const std::vector<float>& a, const std::vector<float>& b) {
        return a == b;
    }, get_positive({}) , {}));
    return 0;
}