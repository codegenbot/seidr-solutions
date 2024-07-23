#include <vector>
#include <algorithm>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    std::copy_if(l.begin(), l.end(),
                 std::back_inserter(result),
                 [](float x){ return x > 0; });
    return result;
}