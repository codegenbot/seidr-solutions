#include <vector>
#include <cassert>

bool issame(std::vector<float>& a, std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<float> numbers = {3.0, -2.0, 5.0, 0.0, 1.0};
    std::vector<float> positive_numbers = get_positive(numbers);

    assert(issame(get_positive({}), std::vector<float>{}));

    return 0;
}