```
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
    assert(issame(1, 2, 1, 2));
    assert(!issame(1, 2, 3, 4));
    std::vector<float> v = { -10.0f, -5.0f, 0.0f, 5.0f, 10.0f };
    std::cout << "Positive numbers: ";
    for (float x : get_positive(v)) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    return 0;
}