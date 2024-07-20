#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    int idx1, idx2;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            idx1 = i;
            idx2 = i + 1;
        }
    }
    return {numbers[idx1], numbers[idx2]};
}