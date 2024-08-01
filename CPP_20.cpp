#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    float closest1 = 0;
    float closest2 = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest1 = numbers[i];
                closest2 = numbers[j];
            }
        }
    }

    vector<float> result({closest1, closest2});
    return result;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == vector<float>({2.2, 3.1}));
    return 0;
}