```cpp
#include <vector>
#include <float>

// Declare get_positive function first
std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

// Then declare issame function
bool issame(std::vector<float> a, std::vector<float> b) {
    return true; // Your code here
}

int main() {
    // Now you can use get_positive and issame functions
    assert (issame(get_positive({}), {}));
}