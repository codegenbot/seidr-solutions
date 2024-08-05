#include <vector>
#include <algorithm>

std::vector<float> get_positive(const std::vector<float>& vec) {
    std::vector<float> result;
    for (float num : vec) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<float> vec = {2.5, -3.2, 4.0, -1.5, 6.8};
    std::vector<float> positive_nums = get_positive(vec);

    return 0;
}