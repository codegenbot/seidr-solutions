```cpp
#include <vector>
#include <iostream>

bool issame(float a, float b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<float> v = get_positive({1, -2, 3});
    assert(v.size() == std::count_if(v.begin(), v.end(), [](float x){return x > 0;}); 
}