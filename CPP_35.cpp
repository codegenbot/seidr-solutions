```cpp
#include <vector>
#include <algorithm>

float max_element(vector<float> l){
    return *max_element(l.begin(), l.end());
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124.0) < 1e-4);
}