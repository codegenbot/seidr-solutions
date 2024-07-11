```cpp
#pragma GCC diagnostic push
{
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
}
#include <vector>
#include <limits>
#include <initializer_list>

std::vector<float> find_closest_elements(std::initializer_list<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }
    
    float min_diff = std::numeric_limits<float>::max();
    auto closest_pair = {*(numbers.begin()), *(--numbers.end())};
    
    for (auto it = numbers.begin(); it != --numbers.end(); ++it) {
        float diff = std::abs(*it - *(--it));
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {*it, *(--it)};
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-9)
            return false;
    }
    return true;
}

int main() {
    std::vector<float> result = find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f});
    assert(issame(result, {2.2f, 3.1f}));
}