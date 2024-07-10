#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }

    return closest_pair;
}

bool issame(vector<float> a, vector<float>b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}) == make_pair(2.2f, 3.1f));
    return 0;
}