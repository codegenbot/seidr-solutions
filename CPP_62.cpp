#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b);

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Define the function derivative here if needed
    
    std::vector<float> vec1 = {1.0, 2.0, 3.0};
    std::vector<float> vec2 = {1.0, 2.0, 3.0};
    
    assert(issame(vec1, vec2));
    
    return 0;
}