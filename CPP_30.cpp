```cpp
#include <vector>
#include <assert.h>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool isSame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(isSame(get_positive({}), std::vector<float>()) == true); 
    return 0;
}