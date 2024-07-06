```cpp
#include <vector>
#include <iostream>

bool std::vector<float> issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i] == b[i])) {
            return false;
        }
    }
    return true;
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
    std::vector<float> v = {1, -2, 3};
    std::cout << "Only positive numbers are: ";
    for (float num : get_positive(v)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}