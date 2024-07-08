#include <vector>
#include <assert.h>

std::vector<float> get_positive(std::vector<float> numbers) {
    std::vector<float> result;
    for (float number : numbers) {
        if (number > 0.0f)
            result.push_back(number);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}