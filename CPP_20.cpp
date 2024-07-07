#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::invalid_argument("Vector must have at least two elements");
    }

    auto min_max_pair = std::minmax_element(numbers.begin(), numbers.end());
    return {*min_max_pair, *(--min_max_pair)};
}