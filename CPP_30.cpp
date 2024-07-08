#include <iostream>
#include <vector>

bool issame(float x1, float y1, float x2, float y2) {
    return (x1 == x2 && y1 == y2);
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
    assert(issame(0.0, 0.0, 0.0, 0.0));
    assert(!issame(1.5, 3.2, -4.7, -6.8));
    
    std::vector<float> v = {1.2, 3.7, -9.1, 11.1};
    std::vector<float> pos = get_positive(v);
    for (float x : pos) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    return 0;
}