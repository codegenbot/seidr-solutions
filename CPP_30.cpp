#include <vector>
#include <cassert>

// Function signature for get_positive function
std::vector<float> get_positive(std::vector<float> l);

// Function signature for issame function
bool issame(std::vector<float> a, std::vector<float> b);

int main() {
    // Test the get_positive function with an empty vector
    assert(issame(get_positive({}), {}));
    return 0;
}

// Implementation of get_positive function
std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

// Implementation of issame function
bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}