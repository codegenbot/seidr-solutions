#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

void intersperse(std::vector<int>& vec, int element) {
    assert(!vec.empty());
    
    std::vector<int> result;
    result.push_back(vec[0]);

    for (size_t i = 1; i < vec.size(); ++i) {
        result.push_back(element);
        result.push_back(vec[i]);
    }

    vec = result;
}