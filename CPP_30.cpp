```cpp
#include <vector>
#include <iostream>

bool issame(vector<float> a, vector<float> b) {
    // Function implementation is not provided in this problem statement
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    // Your code here
}