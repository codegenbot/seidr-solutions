#include <algorithm>
#include <vector>
#include <limits>

bool identical_pair(std::pair<float, float> p1, std::pair<float, float> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

std::vector<std::pair<float, float>> find_closest_elements(const std::vector<float>& numbers) {
    if(numbers.size() <= 1)
        return {};

    std::pair<float, float> closest_pair;
    float min_diff = std::numeric_limits<float>::max();

    for(int i = 0; i < numbers.size() - 1; ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if(diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    return {{closest_pair.first, closest_pair.second}};
}

bool same(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int test_function() {
    assert(same({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, {2.2f, 3.1f}) && find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}) == std::make_pair(2.2f, 3.1f));
    return 0;
}