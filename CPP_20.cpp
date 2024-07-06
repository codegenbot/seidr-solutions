```cpp
#include <algorithm>
#include <vector>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> input_vector) {
    std::vector<float> result = input_vector;
    return result;
}

int main() {
    assert(isSame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {2.2f, 3.1f}));
}