#include <vector>
#include <iostream>

bool is_same(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> get_positive(std::initializer_list<float> values) {
    return std::vector<float>(values);
}

int main() {
    std::vector<float> a = get_positive({1.0, 2.0, 3.0});
    std::vector<float> b = get_positive({1.0, 2.0, 3.0});
    
    if (is_same(a, b)) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are different." << std::endl;
    }
    
    return 0;
}