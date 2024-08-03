#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(std::vector<float> numbers){
    std::sort(numbers.begin(), numbers.end());
    std::vector<float> closest_elements = {numbers[1], numbers[2]};
    return closest_elements;
}

bool issame(std::vector<float> a, std::vector<float> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}