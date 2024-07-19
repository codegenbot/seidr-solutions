#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<int>& l) {
    std::vector<float> result;
    for (int num : l) {
        if (num > 0) {
            result.push_back((float)num); 
        }
    }
    return result;
}

int main() {
    assert(std::equal(get_positive({}), {})); 
    return 0;
}