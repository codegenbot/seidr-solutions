#include <vector>

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

std::vector<float> get_positive(std::initializer_list<float> values) {
    return std::vector<float>(values);
}

int main() {
    std::vector<float> vec1 = get_positive({1.0, 2.0, 3.0});
    std::vector<float> vec2 = get_positive({1.0, 2.0, 3.0});
    
    bool result = issame(vec1, vec2);
    
    return 0;
}