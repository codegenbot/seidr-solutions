```c++
#include <iostream>
#include <vector>

bool haveCloseElements(const std::vector<float>& vec, float threshold);

int main() {
    std::vector<float> myVector = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    assert(haveCloseElements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5f) == false);
    
    return 0;
}

bool haveCloseElements(const std::vector<float>& vec, float threshold) {
    for (int i = 0; i < vec.size() - 1; i++) {
        if (abs(vec[i] - vec[i + 1]) <= threshold)
            return true;
    }
    return false;
}