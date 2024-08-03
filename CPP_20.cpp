#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> closest;
    float min_diff = numeric_limits<float>::max();

    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        float diff = abs(numbers[i] - numbers[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest = {numbers[i], numbers[i + 1]};
        }
    }

    return closest;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
}