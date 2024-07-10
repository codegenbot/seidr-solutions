#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < abs(closest_pair.first - closest_pair.second)) {
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {{2.2, 3.1}}));
    return 0;
}